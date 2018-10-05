#include <Arduino.h>
#include "WiFi.h"
void setup()
{
    Serial.begin(115200);
    WiFi.softAP("Coucou","Coucoumdp");
}

void loop()
{
    Serial.println("Coucou");
    delay(1000);


}
