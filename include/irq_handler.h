#ifndef IRQ_HANDLER_H
#define IRQ_HANDLER_H

#include "pico/stdlib.h"

void activate_irq_btn(uint gpio_pin);

void gpio_callback(uint gpio_pin, uint32_t events);

void handle_btn_interrupt(uint gpio_pin, uint32_t events);

#endif

