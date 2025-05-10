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
    subgraph Column 2
        GPIO13("GPIO 13")
        GPIO14("GPIO 14")
        GPIO15("GPIO 15")
        GPIO16("GPIO 16")
        GPIO17("GPIO 17")
        GPIO18("GPIO 18")
        GPIO19("GPIO 19")
        GPIO20("GPIO 20")
        GPIO21("GPIO 21")
        GPIO22("GPIO 22")
        GPIO23("GPIO 23")
        GPIO24("GPIO 24")
        GPIO25("GPIO 25")
    end

    subgraph Column 1
        GPIO0("GPIO 0")
        GPIO1("GPIO 1")
        GPIO2("GPIO 2 - GREEN BUTTON")
        GPIO3("GPIO 3 - BLUE BUTTON")
        GPIO4("GPIO 4 - RED BUTTON")
        GPIO5("GPIO 5 - YELLOW BUTTON")
        GPIO6("GPIO 6")
        GPIO7("GPIO 7")
        GPIO8("GPIO 8")
        GPIO9("GPIO 9")
        GPIO10("GPIO 10")
        GPIO11("GPIO 11")
        GPIO12("GPIO 12")
    end


    GPIO0-->GPIO1-->GPIO2-->GPIO3-->GPIO4-->GPIO5-->GPIO6-->GPIO7-->GPIO8-->GPIO9-->GPIO10-->GPIO11-->GPIO12
    GPIO13-->GPIO14-->GPIO15-->GPIO16-->GPIO17-->GPIO18-->GPIO19-->GPIO20-->GPIO21-->GPIO22-->GPIO23-->GPIO24-->GPIO25
