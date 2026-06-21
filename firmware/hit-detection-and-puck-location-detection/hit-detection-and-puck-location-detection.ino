const int P1 = 32; // top-left
const int P2 = 33; // top-right
const int P3 = 34; // bottom-left
const int P4 = 35; // bottom-right

const int threshold = 50;
const int recordTimeMs = 100;
const int cooldownMs = 300;

const float boardSize = 24.0; // inches

void setup() {
  Serial.begin(115200);
}

void loop() {
  int r1 = analogRead(P1);
  int r2 = analogRead(P2);
  int r3 = analogRead(P3);
  int r4 = analogRead(P4);

  if (r1 > threshold || r2 > threshold || r3 > threshold || r4 > threshold) {

    int peak1 = 0;
    int peak2 = 0;
    int peak3 = 0;
    int peak4 = 0;

    unsigned long startTime = millis();

    while (millis() - startTime < recordTimeMs) {
      int v1 = analogRead(P1);
      int v2 = analogRead(P2);
      int v3 = analogRead(P3);
      int v4 = analogRead(P4);

      if (v1 > peak1) peak1 = v1;
      if (v2 > peak2) peak2 = v2;
      if (v3 > peak3) peak3 = v3;
      if (v4 > peak4) peak4 = v4;

      delayMicroseconds(500);
    }

    float total = peak1 + peak2 + peak3 + peak4;

    if (total > 0) {
      float x =
        (peak2 * boardSize + peak4 * boardSize) / total;

      float y =
        (peak1 * boardSize + peak2 * boardSize) / total;

      Serial.print("PEAKS,");
      Serial.print(peak1);
      Serial.print(",");
      Serial.print(peak2);
      Serial.print(",");
      Serial.print(peak3);
      Serial.print(",");
      Serial.println(peak4);

      Serial.print("LOCATION,inches,x=");
      Serial.print(x);
      Serial.print(",y=");
      Serial.println(y);
    }

    delay(cooldownMs);
  }
}