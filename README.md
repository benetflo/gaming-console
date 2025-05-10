# gaming-console

```mermaid
# 🕹️ Mini Spelkonsol - Retro Edition

## 📦 Hårdvara som används

### 🎮 Mikrokontroller
- **Raspberry Pi Pico**  
  ![Pico Logo](https://raw.githubusercontent.com/raspberrypi/documentation/master/rpico/Images/rpico-logo.png)

### 🔘 Knappar
- **Grön knapp** (Startknapp)  
- **Blå knapp** (A-knapp)  
- **Röd knapp** (B-knapp)  
- **Gul knapp** (Select-knapp)

### 🧰 Övriga komponenter
- Breadboard 🏗️  
- Kopplingskablar (hona-hane / hane-hane)  
- 10 kΩ Motstånd  
- USB-kabel (för ström och programmering)

## ⚙️ Retro Kopplingsschema

```mermaid
graph TD
    subgraph Raspberry Pi Pico
        A[📍 GPIO 15] -->|Röd| B[Röd knapp]
        A[📍 GPIO 14] -->|Blå| C[Blå knapp]
        A[📍 GPIO 13] -->|Grön| D[Grön knapp]
        A[📍 GPIO 12] -->|Gul| E[Gul knapp]
    end

    B -->|GND| F((GND))
    C -->|GND| G((GND))
    D -->|GND| H((GND))
    E -->|GND| I((GND))
    
    classDef green fill:#00FF00,stroke:#000,stroke-width:2px;
    classDef blue fill:#0000FF,stroke:#000,stroke-width:2px;
    classDef red fill:#FF0000,stroke:#000,stroke-width:2px;
    classDef yellow fill:#FFFF00,stroke:#000,stroke-width:2px;
    
    class B red;
    class C blue;
    class D green;
    class E yellow;

