#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <math.h>

Adafruit_MPU6050 mpu;

float pitch = 0.0;
float roll = 0.0;
float yaw = 0.0;
unsigned long previousTime = 0;

void setup() {

Serial.begin(115200);
Wire.begin(21,22);

if (!mpu.begin()){
  Serial.println("MPU6050 not found.");
  while(1);
}
Serial.println("MPU6050 connected.");

mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
mpu.setGyroRange(MPU6050_RANGE_500_DEG);
mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

previousTime = millis();

}

void loop() {

sensors_event_t a, g, temp;

mpu.getEvent(&a, &g, &temp);

unsigned long currentTime = millis();
float dt = (currentTime - previousTime)/1000.0;

previousTime = currentTime;

float accelPitch = atan2(-a.acceleration.x,sqrt(a.acceleration.y*a.acceleration.y+a.acceleration.z*a.acceleration.z))*180/PI;
float accelRoll = atan2(a.acceleration.y,sqrt(a.acceleration.x*a.acceleration.x+a.acceleration.z*a.acceleration.z))*180/PI;

pitch += g.gyro.x*dt*180/PI;
roll += g.gyro.y*dt*180/PI;
yaw += (g.gyro.z+0.018)*dt*180/PI;

pitch = 0.95*pitch+0.05*accelPitch;
roll = 0.95*roll+0.05*accelRoll;

Serial.print(pitch);
Serial.print(" | ");
Serial.print(roll);
Serial.print(" | ");
Serial.println(yaw);

delay(10);
}
