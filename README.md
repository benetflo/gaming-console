# Hardware used:

## Microcontroller
- **1x Raspberry Pi Pico**

## Controls
- 1x **Green Button**
- 1x **Blue Button**
- 1x **Red Button**
- 1x **Yellow Button**
- 1x **Thumbstick**
- 1x **Rotary Encoder**

## Visuals
- ?x Leds
- 1x **Waveshare 1.83 inch LCD module**

## Sound
- 1x **DFPlayer Mini Mp3 Player**
- 1x **Micro SD card**
- 1x 3W speaker

# GPIO Pin Mapping
```mermaid
graph LR
    %% Vänstersida
    subgraph L [ ]
        GPIO0["GPIO 0 - MP3 PLAYER RX"]:::green 
        GPIO1["GPIO 1 - MP3 PLAYER TX"]:::green 
        GND1["GND"]
        GPIO2["GPIO 2 - GREEN BUTTON"]:::green
        GPIO3["GPIO 3 - BLUE BUTTON"]:::green 
        GPIO4["GPIO 4 - RED BUTTON"]:::green 
        GPIO5["GPIO 5 - YELLOW BUTTON"]:::green 
        GND5["GND"]
        GPIO6["GPIO 6"]:::green 
        GPIO7["GPIO 7"]:::green 
        GPIO8["GPIO 8"]:::green 
        GPIO9["GPIO 9"]:::green 
        GND6["GND"]
        GPIO10["GPIO 10"]:::green
        GPIO11["GPIO 11"]:::green 
        GPIO12["GPIO 12"]:::green 
        GPIO13["GPIO 13"]:::green
        GND7[GND]
        GPIO14["GPIO 14"]:::green
        GPIO15["GPIO 15"]:::green 
    end

    %% Mittkolumn med USB och pads
    subgraph M [Raspberry Pi Pico]
        USB["Micro USB Port"]:::usb
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
        PAD12[" "]
        PAD13[" "]
        PAD14[" "]
        PAD15[" "]
        PAD16[" "]
        PAD17[" "]
        PAD18[" "]
        PAD19[" "]
        
    end

    %% Högersida
    subgraph R [ ]
        VBUS["VBUS"]:::red 
        VSYS["VSYS"]:::red 
        GND2["GND"]
        EN["EN"]:::pink 
        3V3["3V3"]:::red 
        ADC_VREF["ADC_VREF"]:::darkgreen
        GPIO28["GPIO 28"]:::green 
        GND3["GND"]
        GPIO27["GPIO 27 - THUMBSTICK VRY"]:::green 
        GPIO26["GPIO 26 - THUMBSTICK VRX"]:::green 
        RUN["RUN"]:::pink 
        GPIO22["GPIO 22"]:::green 
        GND4["GND"]
        GPIO21["GPIO 21"]:::green
        GPIO20["GPIO 20"]:::green 
        GPIO19["GPIO 19"]:::green 
        GPIO18["GPIO 18"]:::green 
        GND8["GND"]
        GPIO17["GPIO 17"]:::green 
        GPIO16["GPIO 16"]:::green 
    end

    %% Kopplingar till mitten
    GPIO0 --- PAD0
    GPIO1 --- PAD1
    GND1 --- PAD2
    GPIO2 --- PAD3
    GPIO3 --- PAD4
    GPIO4 --- PAD5
    GPIO5 --- PAD6
    GND5 --- PAD7
    GPIO6 --- PAD8
    GPIO7 --- PAD9
    GPIO8 --- PAD10
    GPIO9 --- PAD11
    GND6 --- PAD12
    GPIO10 --- PAD13
    GPIO11 --- PAD14
    GPIO12 --- PAD15
    GPIO13 --- PAD16
    GND7 --- PAD17
    GPIO14 --- PAD18
    GPIO15 --- PAD19

    PAD0 --- VBUS
    PAD1 --- VSYS
    PAD2 --- GND2
    PAD3 --- EN
    PAD4 --- 3V3
    PAD5 --- ADC_VREF
    PAD6 --- GPIO28
    PAD7 --- GND3
    PAD8 --- GPIO27
    PAD9 --- GPIO26
    PAD10 --- RUN
    PAD11 --- GPIO22
    PAD12 --- GND4
    PAD13 --- GPIO21
    PAD14 --- GPIO20
    PAD15 --- GPIO19
    PAD16 --- GPIO18
    PAD17 --- GND8
    PAD18 --- GPIO17
    PAD19 --- GPIO16

    %% Klassdefinitioner
    classDef green fill:#8BC34A,stroke:#000,color:#000;
    classDef blue fill:#2196F3,stroke:#000,color:#000;
    classDef red fill:#F44336,stroke:#000,color:#000;
    classDef yellow fill:#FFEB3B,stroke:#000,color:#000;
    classDef usb fill:#B0BEC5,stroke:#000,color:#000;
    classDef pink fill:#F48FB1,stroke:#000,color:#FFF;
    classDef darkgreen fill:#388E3C,stroke:#000,color:#FFF;




