#include "color_sensor.h"
#include <Arduino.h>

int _S0, _S1, _S2, _S3, _OUT;

void initColorSensor(int s0, int s1, int s2, int s3, int outPin) {
    _S0 = s0;
    _S1 = s1;
    _S2 = s2;
    _S3 = s3;
    _OUT = outPin;

    pinMode(_S0, OUTPUT);
    pinMode(_S1, OUTPUT);
    pinMode(_S2, OUTPUT);
    pinMode(_S3, OUTPUT);
    pinMode(_OUT, INPUT);

    digitalWrite(_S0, HIGH);
    digitalWrite(_S1, LOW);
}

String readColor() {
    digitalWrite(_S2, LOW);
    digitalWrite(_S3, LOW);
    int red = pulseIn(_OUT, LOW);

    digitalWrite(_S2, HIGH);
    digitalWrite(_S3, HIGH);
    int green = pulseIn(_OUT, LOW);

    digitalWrite(_S2, LOW);
    digitalWrite(_S3, HIGH);
    int blue = pulseIn(_OUT, LOW);

    Serial.print("R: "); Serial.print(red);
    Serial.print(" G: "); Serial.print(green);
    Serial.print(" B: "); Serial.println(blue);

    if (red < green && red < blue) return "RED";
    else if (green < red && green < blue) return "GREEN";
    else if (blue < red && blue < green) return "BLUE";
    else return "UNKNOWN";
}