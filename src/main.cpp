#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

uint8_t action = HIGH;
void loop() {
    //Serial.println("Loop");
    //action = action == HIGH ? LOW : HIGH;

    //digitalWrite(LED_BUILTIN, action);
    //delay(1000);


    if (Serial.available() > 0) {
        // read the incoming byte:
        String str = Serial.readString();
        // say what you got:
        Serial.print("I received: ");
        Serial.println(str);
    }
}