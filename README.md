# 🌫️ Air Pollution Monitoring System

This project is an **Arduino Uno-based air quality monitoring system** that detects the level of air pollution in the environment. It uses an **MQ135 gas sensor** to measure air quality, a **DHT11 sensor** to monitor temperature and humidity, and a **16x2 LCD display** to show real-time data. The system can also be integrated with a basic web interface to visualize readings remotely.

## 🚀 Features

- 📉 Real-time monitoring of **air quality** (CO2, NH3, Benzene, etc.)
- 🌡️ Tracks **temperature** and **humidity** via DHT11
- 📟 Displays output on a 16x2 LCD
- 🌐 Optional web interface for remote monitoring
- 💡 Easy to build and beginner-friendly

## 🧰 Components Used and Estimated Cost

| S.No | Component              | Description                           | Quantity | Approx.Cost  (₹)| Total (₹) |
|------|------------------------|------------------------------------_--|----------|-----------------|-----------|
| 1.   | Arduino Uno            | Main microcontroller board            | 1        | ₹500            | ₹500      |
| 2.   | MQ135 Gas Sensor       | Detects air quality (CO2, NH3, etc.)  | 1        | ₹200            | ₹200      |
| 3.   | DHT11 Sensor           | Measures temperature and humidity     | 1        | ₹100            | ₹100      |
| 4.   | 16x2 LCD Display       | For displaying sensor values          | 1        | ₹150            | ₹150      |    
| 5.   | Breadboard             | Prototyping platform                  | 1        | ₹80             | ₹80       |    
| 6.   | Jumper Wires           | For circuit connections               | ~20      | ₹40             | ₹40       |     
**💰 Total Approximate Cost: ₹1,250 – ₹1,300**

## 🔧 How It Works

1. The **MQ135 sensor** continuously senses air pollutants.
2. The **DHT11 sensor** captures temperature and humidity.
3. The data is displayed on a **16x2 LCD** in real-time.
4. Optionally, values can be transmitted to a web page or serial monitor.
