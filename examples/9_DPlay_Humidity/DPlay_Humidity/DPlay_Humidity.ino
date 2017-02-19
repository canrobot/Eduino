#include <DHT.h>

#define DHTPIN 8
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
     dht.begin();
     Serial.begin(9600);
}
  
void loop()
{
     float h = dht.readHumidity();
     float t = dht.readTemperature();
     
     Serial.print("Temp : ");
     Serial.print(t);
     Serial.print(" *C ");
     Serial.print("Hum : ");
     Serial.print(h);
     Serial.println("%");
     delay(500);
}

