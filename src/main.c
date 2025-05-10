#include "irq_handler.h"
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

	gpio_init(GREEN_BTN);
        gpio_set_dir(GREEN_BTN, GPIO_IN);
        gpio_pull_up(GREEN_BTN);

	gpio_init(BLUE_BTN);
	gpio_set_dir(BLUE_BTN, GPIO_IN);
	gpio_pull_up(BLUE_BTN);

	gpio_init(RED_BTN);
        gpio_set_dir(RED_BTN, GPIO_IN);
        gpio_pull_up(RED_BTN);

	gpio_init(YELLOW_BTN);
        gpio_set_dir(YELLOW_BTN, GPIO_IN);
        gpio_pull_up(YELLOW_BTN);

	gpio_init(LED);
	gpio_set_dir(LED, GPIO_OUT);

	activate_irq_btn(GREEN_BTN);
	activate_irq_btn(BLUE_BTN);
	activate_irq_btn(RED_BTN);
	activate_irq_btn(YELLOW_BTN);

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
