#include "hw_init.h"
#include "hardware/gpio.h"
#include "pico/stdlib.h"


void init_gpio_IN_PULL_UP(uint gpio_pin){
	gpio_init(gpio_pin);
	gpio_set_dir(gpio_pin, GPIO_IN);
	gpio_pull_up(gpio_pin);
}

void init_gpio_OUT(uint gpio_pin){
	gpio_init(gpio_pin);
	gpio_set_dir(gpio_pin, GPIO_OUT);
}
