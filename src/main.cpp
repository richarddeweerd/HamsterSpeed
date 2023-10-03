#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    Serial.println("Booting...");
}

void loop() {
    // put your main code here, to run repeatedly:
    Serial.println("Hello World!");
    delay(1000);
}
