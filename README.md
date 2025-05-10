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
    %% Vänstersida
    subgraph L [ ]
        GPIO0["GPIO 0"]
        GPIO1["GPIO 1"]
        GND["GND"]
        GPIO2["GPIO 2 - GREEN"]:::green
        GPIO3["GPIO 3 - BLUE"]:::blue
        GPIO4["GPIO 4 - RED"]:::red
        GPIO5["GPIO 5 - YELLOW"]:::yellow
        GPIO6["GPIO 6"]
        GPIO7["GPIO 7"]
        GPIO8["GPIO 8"]
        GPIO9["GPIO 9"]
        GPIO10["GPIO 10"]
        GPIO11["GPIO 11"]
        GPIO12["GPIO 12"]
    end

    %% Mittkolumn med USB och pads
    subgraph M [Raspberry Pi Pico]
        USB["Micro USB Port"]:::usb
        PAD0["PAD0"]
        PAD1["PAD1"]
        GNDPAD1["GNDPAD1"]
        PAD2["PAD2"]
        PAD3["PAD3"]
        PAD4["PAD4"]
        PAD5["PAD5"]
        PAD6["PAD6"]
        PAD7["PAD7"]
        PAD8["PAD8"]
        PAD9["PAD9"]
        PAD10["PAD10"]
        PAD11["PAD11"]
        PAD12["PAD12"]
    end

    %% Högersida
    subgraph R [ ]
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

    %% Kopplingar till mitten
    GPIO0 --- PAD0
    GPIO1 --- PAD1
    GND --- GNDPAD1
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
    GPIO12 --- PAD12

    PAD0 --- GPIO13
    PAD1 --- GPIO14
    PAD2 --- GPIO15
    PAD3 --- GPIO16
    PAD4 --- GPIO17
    PAD5 --- GPIO18
    PAD6 --- GPIO19
    PAD7 --- GPIO20
    PAD8 --- GPIO21
    PAD9 --- GPIO22
    PAD10 --- GPIO23
    PAD11 --- GPIO24
    PAD12 --- GPIO25

    %% Klassdefinitioner
    classDef green fill:#8BC34A,stroke:#000,color:#000;
    classDef blue fill:#2196F3,stroke:#000,color:#000;
    classDef red fill:#F44336,stroke:#000,color:#000;
    classDef yellow fill:#FFEB3B,stroke:#000,color:#000;
    classDef usb fill:#B0BEC5,stroke:#000,color:#000;





