#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define SCREEN_ADDR 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
void setup() {
Serial.begin(9600);
    if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDR)) {
        Serial.println(F("OLED not found "));
        while (true);
    }
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.println("HELLO YASH BHAI WELCOME TO ARDUINO");
    display.println("HELOO YASH BHAI WELCOME");
    display.display();
}
void loop() {
// write your code here
}