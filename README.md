# 🌫️ Air Pollution Monitoring System

This project is an **Arduino Uno-based air quality monitoring system** that detects the level of air pollution in the environment. It uses an **MQ135 gas sensor** to measure air quality, a **DHT11 sensor** to monitor temperature and humidity, and a **16x2 LCD display** to show real-time data. The system can also be integrated with a basic web interface to visualize readings remotely.

## 🚀 Features

- 📉 Real-time monitoring of **air quality** (CO2, NH3, Benzene, etc.)
- 🌡️ Tracks **temperature** and **humidity** via DHT11
- 📟 Displays output on a 16x2 LCD
- 🌐 Optional web interface for remote monitoring
- 💡 Easy to build and beginner-friendly

## 🧰 Components Used and Estimated Cost

| Component       | Qty | 💰 Cost (INR) |
|----------------|-----|---------------|
| Arduino Uno     | 1   | ₹500          |
| MQ135 Gas Sensor| 1   | ₹200          |
| DHT11 Sensor    | 1   | ₹100          |
| 16x2 LCD Display| 1   | ₹150          |
| Breadboard      | 1   | ₹80           |
| Jumper Wires    | 1   | ₹40           |
| Power Supply    | 1   | ₹60           |
| Others (wires, breadboard) | - | ₹100 |     
**💰 Total Approximate Cost: ₹1,250 – ₹1,300**

## 🔧 How It Works

1. The **MQ135 sensor** continuously senses air pollutants.
2. The **DHT11 sensor** captures temperature and humidity.
3. The data is displayed on a **16x2 LCD** in real-time.
4. Optionally, values can be transmitted to a web page or serial monitor.
