#include <stdio.h>
#include <stdint.h>
#include "pico/stdlib.h"
#include "hardware/uart.h"
#include "hardware/gpio.h"
#include "mp3_module.h"

#define UART_ID uart0
#define BAUD_RATE 9600

/* Initialiserar UART0 med 9600 baud (TX=GPIO0, RX=GPIO1). */
void init_mp3_module(uint tx_pin, uint rx_pin) {

        gpio_set_function(tx_pin, GPIO_FUNC_UART);
        gpio_set_function(rx_pin, GPIO_FUNC_UART);

        uart_init(UART_ID, BAUD_RATE);

        uart_set_hw_flow(UART_ID, false, false);

        uart_set_format(UART_ID, 8, 1, UART_PARITY_NONE);
}

void send_command(uint8_t command, uint8_t para1, uint8_t para2) {
        uint8_t msg[10];
        msg[0] = 0x7E;      // startbyte
        msg[1] = 0xFF;      // version/information (alltid 0xFF)
        msg[2] = 0x06;      // l      ngd (antal bytes efter detta f      lt, exkl. checksum)
        msg[3] = command;   // kommando (t.ex. 0x03 f      r spela sp      r)
        msg[4] = 0x00;      // feedback (0 = inget svar beg      rs)
        msg[5] = para1;     // parameter h      g byte
        msg[6] = para2;     // parameter l      g byte

        uint16_t sum = 0;
        for (int i = 1; i <= 6; i++) {
                sum += msg[i];
        }
        uint16_t checksum = 1 + (0xFFFF - sum);
        msg[7] = (checksum >> 8) & 0xFF;  // checksum high byte
        msg[8] = checksum & 0xFF;         // checksum low byte

        msg[9] = 0xEF; //slutbit

        uart_write_blocking(UART_ID, msg, sizeof(msg));
}

void play_track(uint16_t track) {
        uint8_t high = (track >> 8) & 0xFF;
        uint8_t low  = track & 0xFF;
        send_command(0x03, high, low);
}

void stop_playback(void) {
        send_command(0x0E, 0x00, 0x00);
}

void change_volume(uint8_t volume_level){
	if (volume_level > 30){
		volume_level = 30;
	}
	send_command(0x06, 0x00, volume_level);

}
