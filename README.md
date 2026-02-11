# Digital Parameter Configuration Unit - OLED Display Project

## 1. IDE Used
**CLion** - A powerful C++ IDE by JetBrains specifically designed for C/C++ development with excellent support for embedded systems and microcontroller programming.

## 2. IDE Version
**CLion 2025.3.2** (or later)

## 3. Code Overview
This project demonstrates the initialization and control of an SSD1306 OLED display (128x64 pixels) connected via I2C protocol to an Arduino-compatible microcontroller. 

**Key Functionality:**
- Initializes serial communication at 9600 baud rate for debugging
- Establishes I2C communication with the OLED display at address 0x3C
- Initializes the SSD1306 OLED display with error checking
- Clears the display buffer
- Sets text properties (size: 2, color: white)
- Displays welcome messages on the OLED screen
- Provides a loop structure for continuous operation

The code is simple yet effective for basic OLED display initialization and text rendering.

## 4. Libraries
The following libraries are utilized in this project:

- **Arduino.h** - Core Arduino functionality and sketch execution
- **Wire.h** - I2C (TWI) communication library for microcontroller-to-display communication
- **Adafruit_GFX.h** - Graphics library providing text rendering and drawing primitives
- **Adafruit_SSD1306.h** - SSD1306 OLED display driver library for initialization and control

## 5. Dependencies
To successfully compile and run this project, ensure the following dependencies are installed:

- **PlatformIO Core** - Build system and library manager
- **Adafruit GFX Library** (v1.10.0 or later)
- **Adafruit SSD1306 Library** (v2.5.0 or later)
- **Arduino Framework** - Core Arduino compatibility layer

These libraries can be installed via PlatformIO's library manager or through the Arduino IDE.

## 6. Components Used with OLED

### Display Component
- **SSD1306 OLED Display** - 128x64 pixel monochrome OLED display

### Connectivity
- **I2C Interface**
  - SCL (Serial Clock) Pin - Connected to microcontroller SCL
  - SDA (Serial Data) Pin - Connected to microcontroller SDA
  - GND (Ground) - Common ground
  - VCC (Power) - 3.3V or 5V supply (display dependent)

### Microcontroller
- Arduino-compatible board (Arduino Uno, Nano, Mega, ESP32, etc.)
- Minimum 2KB RAM
- I2C interface support

### Power Supply
- **Voltage:** 3.3V or 5V (depending on display variant)
- **Current:** ~20mA typical operation

## 7. Author Info
**Project Developer:** Yash Bhai  
**GitHub Username:** ks759  
**Date Created:** February 2026  
**Project Type:** Embedded Systems - OLED Display Control

## 8. Software and Hardware Requirements

### Software Requirements
- **IDE:** CLion 2025.3.2 or later
- **Build System:** PlatformIO Core
- **Programming Language:** C++ (C++11 standard)
- **Compiler:** Arduino-compatible C++ compiler (arm-none-eabi-g++ for ARM boards)
- **Framework:** Arduino Framework

### Hardware Requirements
- **Microcontroller:**
  - Arduino Uno/Nano/Mega, or
  - ESP32, ESP8266, or
  - Any Arduino-compatible board with I2C support
  
- **Display:**
  - SSD1306 OLED Display (128x64 pixels)
  - Operating Voltage: 3.3V or 5V
  - Interface: I2C
  
- **Connectivity:**
  - USB cable for programming
  - Jumper wires (4x minimum) for I2C connections
  
- **Power Supply:**
  - 5V/3.3V regulated power supply
  - USB power (if using USB-powered board)
  
- **Optional:**
  - Breadboard for prototyping
  - Pull-up resistors for I2C (typically 4.7kΩ) if not already on display module

---

**Project Status:** Active Development  
**Last Updated:** February 2026
