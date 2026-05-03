# 🌫️ Air Pollution Monitoring System (Arduino + Dashboard Visualization)

An embedded sensing system that performs **real-time environmental monitoring, serial data streaming, and serial-driven dashboard visualization** using low-cost sensors.

---

## 🎯 Problem Statement

Air quality monitoring is often:

* Expensive and inaccessible
* Lacking real-time feedback in small-scale environments
* Not integrated with user-friendly visualization systems

This project demonstrates a **low-cost embedded solution** for monitoring environmental conditions with **local display + web-based dashboard support**.

---

## 🚀 System Overview

The system integrates:

* **Arduino Uno** → sensor data acquisition
* **MQ135 Gas Sensor** → air quality (pollutants)
* **DHT11 Sensor** → temperature and humidity
* **16x2 LCD** → real-time local display
* **Serial Communication** → data transmission
* **Web Dashboard (HTML/CSS/JS)** → visualization layer

---

## 🧠 System Architecture

```text
Sensors (MQ135 + DHT11)
        ↓
Arduino Uno (Data Acquisition)
        ↓
Serial Communication
        ↓
Web Interface (Dashboard)
        ↓
User Visualization
```

---

## ⚙️ Core Functionality

### 📡 Sensor Acquisition

* MQ135 provides raw air quality readings
* DHT11 captures temperature and humidity

### 🖥️ Local Feedback

* LCD displays:

  * Temperature
  * Air quality values

### 🔁 Data Streaming

* Sensor data transmitted via Serial:

  ```
  temperature, humidity, airQuality
  ```

### 🌐 Visualization Layer

* Web dashboard displays:

  * Temperature
  * Humidity
  * Air quality (simulated / extendable to real data)

---

## 🔄 System Workflow

1. Sensors collect environmental data
2. Arduino processes readings
3. LCD displays real-time values
4. Data sent via Serial output
5. Dashboard updates periodically

---

## ▶️ How to Run

### 🔌 Hardware Setup

1. Connect MQ135 → A0
2. Connect DHT11 → Digital Pin 2
3. Connect LCD → Pins (7–12)

### 💻 Software Setup

1. Upload `air_monitor.ino` to Arduino
2. Open Serial Monitor (9600 baud)
3. Open `index.html` for dashboard view

---

## ⚙️ Hardware Components

| Component          | Qty | Cost (INR) |
| ------------------ | --- | ---------- |
| Arduino Uno        | 1   | ₹500       |
| MQ135 Sensor       | 1   | ₹200       |
| DHT11 Sensor       | 1   | ₹100       |
| LCD 16x2           | 1   | ₹150       |
| Breadboard + Wires | -   | ₹200       |

**Total:** ₹1250–₹1300

---

## 🔑 Key Features

* Real-time environmental monitoring
* Multi-sensor data acquisition
* Embedded display (LCD feedback)
* Serial-based data pipeline
* Extendable web dashboard

---

## 🧪 Results

* Stable real-time sensor readings achieved
* LCD successfully displays environmental data
* Serial communication enables external visualization
* Dashboard demonstrates data visualization pipeline

---

## ⚠️ Limitations

* MQ135 outputs raw values (not calibrated AQI)
* Web dashboard currently uses simulated data
* No wireless transmission (wired serial only)

---

## 🔮 Future Improvements

* Replace simulation with real-time serial parsing
* Add ESP32/WiFi for live cloud dashboard
* Calibrate MQ135 for accurate AQI values
* Add data logging and historical trends

---

## 📌 Note

This project demonstrates **sensor interfacing, embedded data acquisition, and visualization pipeline design**, forming a foundation for scalable IoT monitoring systems.
