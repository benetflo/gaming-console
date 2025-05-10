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


```mermaid
graph TD;
    subgraph Column 1
        GPIO0("GPIO 0"):::textBlack
        GPIO1("GPIO 1"):::textBlack
        GPIO2("GPIO 2 - GREEN BUTTON"):::green, textBlack
        GPIO3("GPIO 3 - BLUE BUTTON"):::blue, textBlack
        GPIO4("GPIO 4 - RED BUTTON"):::red, textBlack
        GPIO5("GPIO 5 - YELLOW BUTTON"):::yellow, textBlack
        GPIO6("GPIO 6"):::textBlack
        GPIO7("GPIO 7"):::textBlack
        GPIO8("GPIO 8"):::textBlack
        GPIO9("GPIO 9"):::textBlack
        GPIO10("GPIO 10"):::textBlack
        GPIO11("GPIO 11"):::textBlack
    end

    subgraph Column 2
        GPIO12("GPIO 12"):::textBlack
        GPIO13("GPIO 13"):::textBlack
        GPIO14("GPIO 14"):::textBlack
        GPIO15("GPIO 15"):::textBlack
        GPIO16("GPIO 16"):::textBlack
        GPIO17("GPIO 17"):::textBlack
        GPIO18("GPIO 18"):::textBlack
        GPIO19("GPIO 19"):::textBlack
        GPIO20("GPIO 20"):::textBlack
        GPIO21("GPIO 21"):::textBlack
        GPIO22("GPIO 22"):::textBlack
        GPIO23("GPIO 23"):::textBlack
        GPIO24("GPIO 24"):::textBlack
        GPIO25("GPIO 25"):::textBlack
    end

    GPIO0-->GPIO1-->GPIO2-->GPIO3-->GPIO4-->GPIO5-->GPIO6-->GPIO7-->GPIO8-->GPIO9-->GPIO10-->GPIO11
    GPIO12-->GPIO13-->GPIO14-->GPIO15-->GPIO16-->GPIO17-->GPIO18-->GPIO19-->GPIO20-->GPIO21-->GPIO22-->GPIO23-->GPIO24-->GPIO25

    classDef green fill:#00FF00, color:#000000;
    classDef blue fill:#0000FF, color:#000000;
    classDef red fill:#FF0000, color:#000000;
    classDef yellow fill:#FFFF00, color:#000000;
    classDef textBlack color:#000000;


