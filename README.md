# Ice Hockey Telemetry System

## Overview

The Ice Hockey Telemetry System is an embedded systems project designed to measure and analyze hockey shot performance using low-cost sensors and microcontrollers.

The long-term goal is to develop a smart impact board capable of measuring:
- Impact location
- Shot intensity
- Board response
- Potential puck speed estimation

using sensor fusion techniques and custom electronics.

---

## Current Hardware

- ESP32
- MPU6050 IMU
- Breadboard and jumper wires

Planned additions:
- Piezoelectric impact sensors
- Battery power system
- Bluetooth telemetry
- Custom PCB

---

## Current Features

- I2C communication with MPU6050
- Pitch estimation
- Roll estimation
- Yaw estimation
- Complementary filter implementation
- Gyroscope bias calibration

---

## Project Goals

### Phase 1: Sensor Development

- [x] ESP32 setup
- [x] MPU6050 communication
- [x] Orientation estimation
- [x] Piezo sensor integration
- [x] Impact detection

### Phase 2: Impact Board Prototype

- [ ] Build 2ft x 2ft impact board
- [ ] Install piezo sensor array
- [ ] Detect impact location
- [ ] Record impact intensity

### Phase 3: Telemetry System

- [ ] Bluetooth data transmission
- [ ] Mobile dashboard
- [ ] Data logging
- [ ] Shot analytics

---

## Repository Structure

firmware/
- ESP32 source code

hardware/
- Wiring diagrams
- Parts lists
- Mechanical designs

docs/
- Development notes
- Testing logs
- Design ideas

---

## Future Developments

- Multi-sensor impact localization
- Custom KiCad PCB
- Machine learning based shot classification
- Smartphone application
- Rechargeable battery system
- Solar-powered for constant outdoor use

---

## Author

Ethan Huang

Started: Summer 2026
