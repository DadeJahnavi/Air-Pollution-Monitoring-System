#include <LiquidCrystal.h>
#include <DHT.h>

// LCD Pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// DHT11 setup
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// MQ135 Analog pin
#define MQ135_PIN A0

void setup() {
  lcd.begin(16, 2);
  dht.begin();
  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("Air Monitor Init");
  delay(2000);
  lcd.clear();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  int airQualityRaw = analogRead(MQ135_PIN);

  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.print(temperature);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("AQI:");
  lcd.print(airQualityRaw);
  lcd.print("  ");

  // Send data via Serial for web use
  Serial.print(temperature);
  Serial.print(",");
  Serial.print(humidity);
  Serial.print(",");
  Serial.println(airQualityRaw);

  delay(2000);
}
