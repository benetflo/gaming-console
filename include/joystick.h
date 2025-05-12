#ifndef JOYSTICK_H
#define JOYSTICK_H

#include "pico/stdlib.h"

void adc_isr();
void init_adc_joystick(uint gpio_x, uint gpio_y);
uint16_t get_adc_input(uint gpio);

#endif
