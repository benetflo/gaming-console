# gaming-console

graph TD
    Pico[Raspberry Pi Pico]
    Pico -->|GPIO 15| RedButton[Röd knapp]
    Pico -->|GPIO 14| BlueButton[Blå knapp]
    Pico -->|GPIO 13| GreenButton[Grön knapp]
    Pico -->|GPIO 12| YellowButton[Gul knapp]
    RedButton -->|GND| GND1((GND))
    BlueButton -->|GND| GND2((GND))
    GreenButton -->|GND| GND3((GND))
    YellowButton -->|GND| GND4((GND))
