#include <Arduino.h>
#include "color_sensor.h"

#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define OUT 8

void setup() {
    Serial.begin(9600);
    initColorSensor(S0, S1, S2, S3, OUT);
}

void loop() {
    String color = readColor();
    Serial.println("Detected Color: " + color);
    delay(1000);
}