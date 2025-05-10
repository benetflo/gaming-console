# gaming-console
```mermaid
graph TD
    A[Raspberry Pi Pico] -->|GPIO 15| B[Grön knapp]
    A[Raspberry Pi Pico] -->|GPIO 14| C[Blå knapp]
    A[Raspberry Pi Pico] -->|GPIO 13| D[Röd knapp]
    A[Raspberry Pi Pico] -->|GPIO 12| E[Gul knapp]
    B -->|GND| F((GND))
    C -->|GND| G((GND))
    D -->|GND| H((GND))
    E -->|GND| I((GND))

    class B green;
    class C blue;
    class D red;
    class E yellow;
