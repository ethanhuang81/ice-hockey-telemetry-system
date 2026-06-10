const int piezo1 = 32;
const int piezo2 = 33;

const int threshold = 0;
const int recordTimeMs = 100;
const int cooldownMs = 300;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int p1 = analogRead(piezo1);
  int p2 = analogRead(piezo2);

  if (p1 > threshold || p2 > threshold) {
    
    int p1peak = 0;
    int p2peak = 0;

    Serial.println("START");

    unsigned long startTime = millis();

    while (millis() - startTime < recordTimeMs) {
      int v1 = analogRead(piezo1);
      int v2 = analogRead(piezo2);

      if (v1 > p1peak) p1peak = v1;
      if (v2 > p2peak) p2peak = v2;

      Serial.print(millis());
      Serial.print(",");
      Serial.print(v1);
      Serial.print(",");
      Serial.println(v2);

      delay(1);
    }
    Serial.print("PEAKS: ");
    Serial.print(p1peak);
    Serial.print(",");
    Serial.println(p2peak);

    Serial.println("END");
    delay(cooldownMs);
  }
}