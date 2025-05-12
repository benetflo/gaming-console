#ifndef MP3_MODULE_H
#define MP3_MODULE_H

#define UART_ID uart0
#define BAUD_RATE 9600

void init_mp3_module(uint tx_pin, uint rx_pin);
void send_command(uint8_t command, uint8_t para1, uint8_t para2);
void play_track(uint16_t track);
void stop_playback(void);
void change_volume(uint8_t volume_level);

#endif
