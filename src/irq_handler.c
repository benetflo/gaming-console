#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "irq_handler.h"
#include "pico/time.h"


#define DEBOUNCE_DELAY_MS 50

// Array to store the last valid interrupt time for each GPIO pin (index = GPIO number)
static absolute_time_t last_debounce_time[7];

#define GREEN_BTN 2
#define BLUE_BTN 3
#define RED_BTN 4
#define YELLOW_BTN 5
#define ROTARY_CLK 16
#define ROTARY_DATA 17
#define ROTARY_SW 18


extern volatile bool green_btn_is_pressed;
extern volatile bool blue_btn_is_pressed;
extern volatile bool red_btn_is_pressed;
extern volatile bool yellow_btn_is_pressed;

extern volatile bool rotary_switch_is_pressed;
extern volatile int encoder_position;
volatile bool last_clk_state = false;


void activate_irq_btn_rotary(uint gpio_pin){
	gpio_set_irq_enabled_with_callback(gpio_pin, GPIO_IRQ_EDGE_FALL | GPIO_IRQ_EDGE_RISE, true, &gpio_callback);
}

// gemensam callback
void gpio_callback(uint gpio_pin, uint32_t events){
	if(gpio_pin == GREEN_BTN || gpio_pin == BLUE_BTN || gpio_pin == RED_BTN || gpio_pin == YELLOW_BTN){
		handle_btn_interrupt(gpio_pin, events);
	}else if(gpio_pin == ROTARY_CLK || gpio_pin == ROTARY_DATA || gpio_pin == ROTARY_SW){
		handle_rotary_interrupt(gpio_pin, events);
	}// bygg vidare har for andra komponenter
}


void handle_rotary_interrupt(uint gpio_pin, uint32_t events){

	absolute_time_t now = get_absolute_time(); // store current system time in us

        if (absolute_time_diff_us(last_debounce_time[gpio_pin], now) < DEBOUNCE_DELAY_MS * 1000) {
                return; // Ignore bounce
        }
        // Update the last valid time for this pin (used for debounce logic)
	last_debounce_time[gpio_pin] = now;

	if(gpio_pin == ROTARY_SW){
		rotary_switch_is_pressed = !rotary_switch_is_pressed;
	}else if(gpio_pin == ROTARY_CLK){
		bool clk = gpio_get(ROTARY_CLK);
		bool dt = gpio_get(ROTARY_DATA);

		if(dt != clk){
			if(encoder_position < 30){
				encoder_position++;
			}
		}else{
			if(encoder_position > 0){
				encoder_position--;
			}
		}
	}
}

void handle_btn_interrupt(uint gpio_pin, uint32_t events){

	absolute_time_t now = get_absolute_time(); // store current system time in us

	if (absolute_time_diff_us(last_debounce_time[gpio_pin], now) < DEBOUNCE_DELAY_MS * 1000) {
		return; // Ignore bounce
	}
	// Update the last valid time for this pin (used for debounce logic)
	last_debounce_time[gpio_pin] = now;

	if(gpio_pin == GREEN_BTN){
		green_btn_is_pressed = !green_btn_is_pressed;
	}else if(gpio_pin == BLUE_BTN){
		blue_btn_is_pressed = !blue_btn_is_pressed;
	}else if(gpio_pin == RED_BTN){
		red_btn_is_pressed = !red_btn_is_pressed;
	}else if(gpio_pin == YELLOW_BTN){
		yellow_btn_is_pressed = !yellow_btn_is_pressed;
	}
}
