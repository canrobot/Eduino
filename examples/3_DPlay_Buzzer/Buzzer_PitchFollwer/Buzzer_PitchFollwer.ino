void setup() {
     Serial.begin(9600);
}

void loop() {
     int sensorReading = analogRead(A0);
     Serial.println(sensorReading);
     int thisPitch = map(sensorReading, 100, 1000, 120, 1500);

     tone(8, thisPitch, 10);
     delay(1);        // delay in between reads for stability
}






