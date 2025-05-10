# Hardware used:

## Microcontroller
- **1x Raspberry Pi Pico**

## Controls
- 1x **Green Button**
- 1x **Blue Button**
- 1x **Red Button**
- 1x **Yellow Button**
- 1x **Thumbstick**

## Visuals
- ?x Leds
- 1x Waveshare 1.83 inch LCD module

# GPIO Pin Mapping
```mermaid
graph LR
    subgraph L [ ]
        GPIO0["GPIO 0"]
        GPIO1["GPIO 1"]
        GPIO2["GPIO 2 - GREEN"]
        GPIO3["GPIO 3 - BLUE"]
        GPIO4["GPIO 4 - RED"]
        GPIO5["GPIO 5 - YELLOW"]
        GPIO6["GPIO 6"]
        GPIO7["GPIO 7"]
        GPIO8["GPIO 8"]
        GPIO9["GPIO 9"]
        GPIO10["GPIO 10"]
        GPIO11["GPIO 11"]
    end

    subgraph M [Raspberry Pi Pico]
        PAD0[" "]
        PAD1[" "]
        PAD2[" "]
        PAD3[" "]
        PAD4[" "]
        PAD5[" "]
        PAD6[" "]
        PAD7[" "]
        PAD8[" "]
        PAD9[" "]
        PAD10[" "]
        PAD11[" "]
    end

    subgraph R [ ]
        GPIO12["GPIO 12"]
        GPIO13["GPIO 13"]
        GPIO14["GPIO 14"]
        GPIO15["GPIO 15"]
        GPIO16["GPIO 16"]
        GPIO17["GPIO 17"]
        GPIO18["GPIO 18"]
        GPIO19["GPIO 19"]
        GPIO20["GPIO 20"]
        GPIO21["GPIO 21"]
        GPIO22["GPIO 22"]
        GPIO23["GPIO 23"]
        GPIO24["GPIO 24"]
        GPIO25["GPIO 25"]
    end

    %% align left-side GPIOs to Pico pads
    GPIO0 --- PAD0
    GPIO1 --- PAD1
    GPIO2 --- PAD2
    GPIO3 --- PAD3
    GPIO4 --- PAD4
    GPIO5 --- PAD5
    GPIO6 --- PAD6
    GPIO7 --- PAD7
    GPIO8 --- PAD8
    GPIO9 --- PAD9
    GPIO10 --- PAD10
    GPIO11 --- PAD11

    %% align right-side GPIOs to Pico pads (reuse PADs for spacing)
    PAD0 --- GPIO12
    PAD1 --- GPIO13
    PAD2 --- GPIO14
    PAD3 --- GPIO15
    PAD4 --- GPIO16
    PAD5 --- GPIO17
    PAD6 --- GPIO18
    PAD7 --- GPIO19
    PAD8 --- GPIO20
    PAD9 --- GPIO21
    PAD10 --- GPIO22
    PAD11 --- GPIO23
    PAD11 --- GPIO24
    PAD11 --- GPIO25

