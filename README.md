# OLED Display Project

## 1. IDE Used
**CLion** - A powerful C++ IDE by JetBrains for embedded development and general-purpose programming.

## 2. IDE Version
**CLion 2025.3.2**

## 3. Code Overview
This project initializes and displays text on an SSD1306 OLED display using an Arduino-compatible microcontroller. The code sets up serial communication, initializes the display with I2C protocol, configures text properties, and displays welcome messages on the screen.

## 4. Libraries
- **Arduino.h** - Core Arduino functionality
- **Wire.h** - I2C communication protocol
- **Adafruit_GFX.h** - Graphics library for display rendering
- **Adafruit_SSD1306.h** - Driver library for SSD1306 OLED displays

## 5. Dependencies
- Adafruit GFX Library
- Adafruit SSD1306 Library
- Arduino IDE/Framework

## 6. Components Used with OLED
- **SSD1306 OLED Display** (128x64 pixels)
- **I2C Interface** (SCL and SDA pins)
- **Microcontroller** (Arduino-compatible board)
- **Power Supply** (3.3V or 5V depending on display variant)

## 7. Author Info
**Developer:** Krishna201i (GitHub username)

## 8. Software and Hardware Requirements

### Software Requirements
- CLion 2025.3.2
- Arduino Framework/IDE
- C++ Compiler (C++11 or later)

### Hardware Requirements
- Arduino-compatible microcontroller (Arduino Uno, Nano, ESP32, etc.)
- SSD1306 OLED Display (128x64 pixels)
- I2C communication interface
- USB cable for programming
- Jumper wires for connections
