#include <Arduino.h>
#include "WiFi.h"
void setup()
{
    Serial.begin(115200);
    WiFi.softAP("Coucou","Coucoumdp",2,0,1);
}

void loop()
{
    Serial.println("Coucou");
    delay(1000);


}
