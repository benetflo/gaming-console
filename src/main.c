// from include folder
#include "irq_handler.h"
#include "hw_init.h"

// pico sdk, stdlib
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include <stdbool.h>

#define GREEN_BTN 2
#define BLUE_BTN 3
#define RED_BTN 4
#define YELLOW_BTN 5

#define LED 0

volatile bool green_btn_is_pressed = false;
volatile bool blue_btn_is_pressed = false;
volatile bool red_btn_is_pressed = false;
volatile bool yellow_btn_is_pressed = false;


int main(){

	// SETUP
	init_gpio_IN_PULL_UP(GREEN_BTN);
	init_gpio_IN_PULL_UP(BLUE_BTN);
	init_gpio_IN_PULL_UP(RED_BTN);
	init_gpio_IN_PULL_UP(YELLOW_BTN);
	init_gpio_OUT(LED);

	activate_irq_btn(GREEN_BTN);
	activate_irq_btn(BLUE_BTN);
	activate_irq_btn(RED_BTN);
	activate_irq_btn(YELLOW_BTN);

	// MAIN LOOP
	while(1){
		if(blue_btn_is_pressed || red_btn_is_pressed || yellow_btn_is_pressed || green_btn_is_pressed){
			gpio_put(LED, 1);
		}else{
			gpio_put(LED, 0);
		}
		//sleep_ms(50);
	}
	return 0;
}
