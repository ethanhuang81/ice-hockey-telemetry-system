# Development Log

## 2026-06-27

### Goals
- Finish impact board

### Accomplishments
- Finished building wooden impact board

### Problems Encountered
- Connections between wooden posts at the corners would be unstable, so instead a PETG 3DP corner mount was used

### Observations
- Build was pretty sturdy after using 3DP corner mounts

### Next Steps
- Install piezo sensor array and MPU6050 to the wooden prototype
- Potentially consider designing a shock absorbent case for the ESP-32 and MPU6050

## 2026-06-20

### Goals
- Implement working shot-impact detection with all four piezoelectric sensors
- Determine location of puck dependent on piezoelectric sensor readings

### Accomplishments
- Finished code for shot detection and puck impact location detection

### Problems Encountered
- Faulty connections, leading to issues with piezoelectric sensor readings

### Observations
- Had issues with piezoelectric sensors producing peak values of 0 which is below the threshold

### Next Steps
- Test code
- Continue working on wooden prototype
- Tune piezoelectric sensor readings


## 2026-06-09

### Goals
- Implement working shot-impact detection with multiple piezoelectric sensors
- Start construction on first wooden prototype

### Accomplishments
- Successfully implemented working impact detection with two piezoelectric sensors

### Problems Encountered
- Faulty connections

### Observations
- Piezoelectric readings are still very rough and differ greatly

### Next Steps
- Implement impact detection with four piezoelectric sensors
- Continue working on wooden prototype
- Tune piezoelectric sensor readings

## 2026-06-08

### Goals
- Implement working shot-impact detection with piezoelectric sensors

### Accomplishments
- Have very rough impact detection working

### Problems Encountered
- Initially was difficult in getting values from impacts due to low resistance
- Changed resistance from 1 Megohm to 2 Megohm to get more sensitive impact reading

### Observations
- Values acquired from sensor are very widespread
- Sometimes a peak would result in a sensor reading of 700, other times 1000+ from the same distance and around the same impact

### Next Steps
- Test more and tune values
- Test with multiple piezoelectric sensors
- Build first wooden prototype!

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
