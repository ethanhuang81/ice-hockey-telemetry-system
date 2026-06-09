const int hitSensor = 33;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorReading = analogRead(hitSensor);
  if (sensorReading > 0) {
    Serial.println(sensorReading);
  } 
  
  delay(10);
}