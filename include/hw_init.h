#ifndef HW_INIT_H
#define HW_INIT_H

#include "pico/stdlib.h"

void init_gpio_IN_PULL_UP(uint gpio_pin);
void init_gpio_OUT(uint gpio_pin);

void init_gpio_adc(uint gpio_pin);

#endif
