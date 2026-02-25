# Social Distancing ID Card using Arduino

## 📌 Project Overview
This project is a wearable device developed using Arduino Uno and HC-SR04 ultrasonic sensor to maintain a safe social distance of 1 meter. The system provides both sound and visual alerts when the distance threshold is crossed.

## 🛠 Components Used
- Arduino Uno (ATmega328P)
- Ultrasonic Sensor (HC-SR04)
- Piezo Buzzer
- LED
- Battery Power Supply

## ⚙ Working Principle
1. The ultrasonic sensor transmits sound waves at 40kHz.
2. The reflected waves are received back by the sensor.
3. Arduino calculates distance using time-of-flight formula.
4. If distance < 100 cm:
   - Buzzer turns ON
   - LED turns ON
5. If distance ≥ 100 cm:
   - System remains in safe state.

## 📐 Distance Calculation Formula

Distance = (Time × Speed of Sound) / 2

Speed of sound ≈ 343 m/s

## 🔌 Pin Configuration

| Component | Arduino Pin |
|-----------|------------|
| Trigger   | 9          |
| Echo      | 10         |
| Buzzer    | 8          |
| LED       | 7          |

## 💻 Programming Language
Embedded C using Arduino IDE

## 🚀 Future Improvements
- IoT integration (ESP8266)
- Mobile App Alert System
- Vibration motor for silent alert
- Rechargeable Lithium Battery Integration

## 🎯 Learning Outcomes
- Sensor interfacing
- Embedded system programming
- Real-time distance measurement
- Hardware and software integration

---

Developed by: Satyam Patel  
B.Tech (Electronics and Communication Engineering)
