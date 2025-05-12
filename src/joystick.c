#include "hardware/adc.h"
#include "pico/stdlib.h"
#include "hardware/irq.h"
#include "joystick.h"
#include <stdlib.h>

#define DEAD_ZONE 50

bool adc_is_initialized = false;
extern volatile uint16_t joystick_x;
extern volatile uint16_t joystick_y;
volatile bool reading_x = true;

uint16_t last_x = 0;
uint16_t last_y = 0;
uint16_t x_adc_input = 0;
uint16_t y_adc_input = 0;

void adc_isr(){
	uint16_t value = adc_fifo_get();

	if(reading_x){
		uint16_t diff = (value > last_x) ? (value - last_x) : (last_x - value);
		if(diff > DEAD_ZONE) {
			joystick_x = value;
			last_x = value;
		}
	} else {
        	uint16_t diff = (value > last_y) ? (value - last_y) : (last_y - value);
		if(diff > DEAD_ZONE) {
			joystick_y = value;
			last_y = value;
		}
}

	reading_x = !reading_x;
	uint16_t next_input = reading_x ? x_adc_input : y_adc_input;
	adc_select_input(next_input);
	adc_run(true);
}

uint16_t get_adc_input(uint gpio){
	if(gpio == 26){
		return 0;
	}else if(gpio == 27){
		return 1;
	}else if(gpio == 28){
		return 2;
	}else if(gpio == 29){
		return 3;
	}else{
		return 0xFFFF;
	}
}

void init_adc_joystick(uint gpio_x, uint gpio_y){
	if(!adc_is_initialized){
		adc_init();
		adc_is_initialized = true;
	}

	adc_gpio_init(gpio_x);
	adc_gpio_init(gpio_y);

	x_adc_input = get_adc_input(gpio_x);
	y_adc_input = get_adc_input(gpio_y);

	adc_select_input(x_adc_input);

	adc_fifo_setup(true, false, 1, false, false);

	adc_irq_set_enabled(true);
	irq_set_exclusive_handler(ADC_IRQ_FIFO, adc_isr);
	irq_set_enabled(ADC_IRQ_FIFO, true);

	adc_run(true);
}
