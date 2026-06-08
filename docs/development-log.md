# Development Log

## 2026-06-08

### Goals
- Implement working shot-impact detection with piezoelectric sensors

### Accomplishments

### Problems Encountered

### Observations

### Next Steps

## 2026-05-31

### Goals
- Get MPU-6050 integrated with ESP-32 MCU
- Implement complementary filter on MPU-6050 for more accurate acceleration and angular velocity measurements

### Accomplishments
- Successfully connected MPU6050 over I2C
- Implemented pitch estimation
- Added complementary filter
- Reduced yaw drift significantly

### Problems Encountered
- Board selection issues
- Poor soldering with jumper pins led to faulty connection between MPU-6050 and ESP-32

### Observations
- Pitch and roll are mostly stable
- Yaw drifts slowly over time and errors compound with more complicated rotations

### Next Steps
- Research and order piezo sensors as well as other components
- Research and consider purchasing a 9-axis IMU with a magnometer
