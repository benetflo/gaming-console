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
graph TD;
    subgraph Left Side
        GPIO0("GPIO 0") --> PICO
        GPIO1("GPIO 1") --> PICO
        GPIO2("GPIO 2 - GREEN") --> PICO
        GPIO3("GPIO 3 - BLUE") --> PICO
        GPIO4("GPIO 4 - RED") --> PICO
        GPIO5("GPIO 5 - YELLOW") --> PICO
        GPIO6("GPIO 6") --> PICO
        GPIO7("GPIO 7") --> PICO
        GPIO8("GPIO 8") --> PICO
        GPIO9("GPIO 9") --> PICO
        GPIO10("GPIO 10") --> PICO
        GPIO11("GPIO 11") --> PICO
    end

    subgraph Right Side
        PICO --> GPIO12("GPIO 12")
        PICO --> GPIO13("GPIO 13")
        PICO --> GPIO14("GPIO 14")
        PICO --> GPIO15("GPIO 15")
        PICO --> GPIO16("GPIO 16")
        PICO --> GPIO17("GPIO 17")
        PICO --> GPIO18("GPIO 18")
        PICO --> GPIO19("GPIO 19")
        PICO --> GPIO20("GPIO 20")
        PICO --> GPIO21("GPIO 21")
        PICO --> GPIO22("GPIO 22")
        PICO --> GPIO23("GPIO 23")
        PICO --> GPIO24("GPIO 24")
        PICO --> GPIO25("GPIO 25")
    end

    PICO["Raspberry Pi Pico\n(MCU)"]:::pico

    classDef pico fill:#cccccc,stroke:#000,stroke-width:2px,color:#000;



