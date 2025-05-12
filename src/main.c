// from include folder
#include "irq_handler.h"
#include "hw_init.h"
#include "joystick.h"
#include "mp3_module.h"

// pico sdk, stdlib, external
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include <stdbool.h>
#include "hardware/adc.h"
#include "stdio.h"

#define UART_TX_PIN 0
#define UART_RX_PIN 1
#define GREEN_BTN 2
#define BLUE_BTN 3
#define RED_BTN 4
#define YELLOW_BTN 5
#define VRX 26 // adc 0
#define VRY 27 // adc 1
#define SW 15 // doublecheck that 15 does not collide with lcd screen

#define ROTARY_CLK 16
#define ROTARY_DATA 17
#define ROTARY_SW 18

#define LED 0

volatile bool green_btn_is_pressed = false;
volatile bool blue_btn_is_pressed = false;
volatile bool red_btn_is_pressed = false;
volatile bool yellow_btn_is_pressed = false;

volatile bool rotary_switch_is_pressed = false;
volatile int encoder_position = 0;

volatile uint16_t joystick_x = 0;
volatile uint16_t joystick_y = 0;

//

int main(){

	stdio_init_all();

	// SETUP
	init_gpio_IN_PULL_UP(GREEN_BTN);
	init_gpio_IN_PULL_UP(BLUE_BTN);
	init_gpio_IN_PULL_UP(RED_BTN);
	init_gpio_IN_PULL_UP(YELLOW_BTN);
	init_gpio_OUT(LED);

	init_gpio_IN_PULL_UP(ROTARY_SW);
	init_gpio_IN_PULL_UP(ROTARY_CLK);
	init_gpio_IN_PULL_UP(ROTARY_DATA);

	activate_irq_btn_rotary(GREEN_BTN);
	activate_irq_btn_rotary(BLUE_BTN);
	activate_irq_btn_rotary(RED_BTN);
	activate_irq_btn_rotary(YELLOW_BTN);

	activate_irq_btn_rotary(ROTARY_SW);
	activate_irq_btn_rotary(ROTARY_CLK);

	init_adc_joystick(VRX, VRY);

	init_mp3_module(UART_TX_PIN, UART_RX_PIN);

	play_track(1);
	// MAIN LOOP
	while(1){
		change_volume(encoder_position);
		sleep_ms(50);
	}
	return 0;
}
