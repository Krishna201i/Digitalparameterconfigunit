# Digital Parameter Configuration Unit - OLED Display Project

## 1. IDE Used
**CLion** - A powerful C/C++ Integrated Development Environment by JetBrains. CLion is specifically designed for C/C++ developers and provides excellent support for embedded systems development, including Arduino and microcontroller programming.

---

## 2. IDE Version
**CLion 2025.3.2** (or later compatible version)

Additional Tools:
- **PlatformIO Plugin** - For Arduino framework and embedded development
- **CMake** - Build system integration

---

## 3. Code Overview

This project initializes and controls an **SSD1306 OLED Display (128x64 pixels)** using an Arduino-compatible microcontroller via I2C communication protocol.

### Project Features:
- **Serial Communication**: Initializes serial monitor at 9600 baud rate for debugging
- **I2C Display Driver**: Communicates with OLED display at I2C address 0x3C
- **Display Initialization**: Sets up the SSD1306 OLED with error handling
- **Text Rendering**: Displays welcome messages with customizable text size and color
- **Error Detection**: Verifies successful display initialization and halts on failure

### Code Structure:
```cpp
setup() {
  - Initialize Serial communication
  - Initialize I2C/Wire communication
  - Initialize SSD1306 OLED display
  - Clear display buffer
  - Configure text properties (size, color, cursor)
  - Display welcome messages
}

loop() {
  - Main application loop (ready for expansion)
}
```

### Display Configuration:
- **Screen Width**: 128 pixels
- **Screen Height**: 64 pixels
- **I2C Address**: 0x3C (hexadecimal)
- **Text Size**: 2 (adjustable)
- **Text Color**: White (SSD1306_WHITE)

---

## 4. Libraries

The following libraries are used in this project:

### Core Libraries:
1. **Arduino.h** - Core Arduino sketch functionality and microcontroller operations

2. **Wire.h** - I2C (Two-Wire Interface) communication library for master-slave communication between microcontroller and display

3. **Adafruit_GFX.h** - Graphics library providing:
   - Text rendering functions
   - Drawing primitives (lines, circles, rectangles)
   - Font support

4. **Adafruit_SSD1306.h** - SSD1306 OLED display driver library providing:
   - Display initialization routines
   - Buffer management
   - Display update functions
   - Graphics rendering for this specific display chip

---

## 5. Dependencies

To successfully compile and run this project, ensure the following dependencies are installed:

### Required Libraries (via PlatformIO):
- **Adafruit GFX Library** (v1.10.0 or later)
- **Adafruit SSD1306 Library** (v2.5.0 or later)

### Framework:
- **Arduino Framework** - Core Arduino compatibility layer

### Installation (PlatformIO):
```ini
lib_deps = 
    adafruit/Adafruit GFX Library@^1.10.0
    adafruit/Adafruit SSD1306@^2.5.0
```

### System Requirements:
- **PlatformIO Core** - Build system and library manager
- **Python 3.6+** - Required for PlatformIO
- **C++ Compiler** - arm-none-eabi-g++ or equivalent for your board

---

## 6. Components Used with OLED

### 1. Display Module
- **SSD1306 OLED Display**
  - Resolution: 128 x 64 pixels
  - Type: Monochrome (White/Black)
  - Interface: I2C
  - Default I2C Address: 0x3C

### 2. Microcontroller
- **Arduino-compatible Board** (one of the following):
  - Arduino Uno
  - Arduino Nano
  - Arduino Mega
  - Arduino Pro Mini
  - ESP32
  - ESP8266
  - Or any board with I2C support

### 3. I2C Connection Pins
- **SCL (Serial Clock)** - Clock line connected to microcontroller SCL pin
- **SDA (Serial Data)** - Data line connected to microcontroller SDA pin
- **GND** - Ground (common ground between microcontroller and display)
- **VCC** - Power supply (3.3V or 5V depending on display variant)

### 4. Power Supply
- **Voltage Rating**: 3.3V or 5V (check display specifications)
- **Current Consumption**: ~20mA typical operation
- **Supply Source**: USB power, external power supply, or battery

### 5. Optional Components
- **Breadboard** - For prototyping and connections
- **Jumper Wires** - For I2C line connections (minimum 4 wires)
- **Pull-up Resistors** - 4.7kΩ (if not built-in on display module)
- **Decoupling Capacitors** - For power supply stability (0.1µF)

### Connection Diagram:
```
Microcontroller          OLED Display (SSD1306)
    GND ─────────────────── GND
    5V/3.3V ───────────────── VCC
    SCL ─────────────────── SCL
    SDA ─────────────────── SDA
```

---

## 7. Author Info

**Project Developer**: Yash Bhai  
**GitHub Username**: ks759  
**Project Name**: Digital Parameter Configuration Unit  
**Project Type**: Embedded Systems - OLED Display Control  
**Date Created**: February 2026  
**Version**: 1.0

---

## 8. Software and Hardware Requirements

### Software Requirements

| Component | Requirement |
|-----------|------------|
| **IDE** | CLion 2025.3.2 or later |
| **Build System** | PlatformIO Core 6.0+ or Arduino IDE 1.8.0+ |
| **Programming Language** | C++ (C++11 standard or later) |
| **Compiler** | arm-none-eabi-g++ or equivalent for target board |
| **Framework** | Arduino Framework |
| **Operating System** | Windows, macOS, or Linux |
| **Python** | 3.6+ (for PlatformIO) |

### Hardware Requirements

#### Microcontroller Board
- **Supported Boards**:
  - Arduino Uno / Nano / Mega
  - Arduino Pro Mini
  - ESP32 DevKit
  - ESP8266 NodeMCU
  - Any Arduino-compatible board with I2C support

- **Minimum Specifications**:
  - RAM: 2KB minimum
  - Flash Memory: 4KB minimum
  - I2C Interface: Required
  - Operating Voltage: 3.3V or 5V

#### Display Module
- **Display Type**: SSD1306 OLED Display
- **Resolution**: 128 x 64 pixels
- **Interface**: I2C
- **Operating Voltage**: 3.3V or 5V (check specifications)
- **Current Draw**: ~20mA typical

#### Power Supply
- **Primary Supply**: 5V/3.3V regulated power source
- **Alternative**: USB power (if using USB-powered board)
- **Backup**: Battery support (if applicable)
- **Power Capacity**: Minimum 500mA recommended

#### Connectivity Components
- **USB Cable**: USB Type-A to Micro-USB/Mini-USB for programming
- **Jumper Wires**: 4+ female-to-female or male-to-female wires
- **Breadboard**: Optional, for prototyping (soldering alternative)

#### Optional Components
- **Pull-up Resistors**: 4.7kΩ (if I2C lines need pull-ups)
- **Decoupling Capacitors**: 0.1µF for power supply stabilization
- **FTDI Programmer**: For boards without built-in USB programmer

#### Total Component Cost Estimate
- Arduino Uno/Nano: $3-8
- SSD1306 OLED Display: $3-5
- Jumper Wires Pack: $1-2
- **Total**: ~$10-15

---

## Getting Started

### 1. Hardware Setup
- Connect the OLED display to your microcontroller via I2C
- Ensure proper power supply connections
- Double-check all connections before powering on

### 2. Software Installation
- Install CLion and PlatformIO plugin
- Create a new PlatformIO project for your board
- Add the required libraries to `platformio.ini`

### 3. Code Upload
- Copy the provided code to `src/main.cpp`
- Build the project
- Upload to your microcontroller via USB

### 4. Testing
- Open Serial Monitor (9600 baud)
- Verify "HELLO YASH BHAI" message appears on OLED
- Check Serial Monitor for any error messages

---

## Project Status
**Status**: Active Development  
**Last Updated**: February 11, 2026  
**License**: Open Source (Specify your license if needed)

---

## Support & Troubleshooting

### Common Issues:
1. **"OLED not found" message**
   - Check I2C connections
   - Verify I2C address (0x3C)
   - Check power supply to display

2. **Display not showing text**
   - Ensure display buffer is updated with `display.display()`
   - Check text color settings
   - Verify display initialization succeeded

3. **I2C Communication Errors**
   - Check for pull-up resistors on SCL/SDA
   - Verify correct pin assignments
   - Use I2C scanner to detect display address

---

## Additional Resources
- [Adafruit SSD1306 Library Documentation](https://github.com/adafruit/Adafruit_SSD1306)
- [Arduino I2C/Wire Library Guide](https://www.arduino.cc/en/reference/wire)
- [CLion Documentation](https://www.jetbrains.com/help/clion/)
- [PlatformIO Documentation](https://docs.platformio.org/)
