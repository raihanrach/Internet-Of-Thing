#include <DHT.h> //library sensor yang telah diimportkan
#define DHTPIN 14     //Pin apa yang digunakan
#define DHTTYPE DHT11   // DHT 11
 
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  delay(3000); 
  
  float humidity_1 = dht.readHumidity();
  float celcius_1 = dht.readTemperature();
  
  Serial.print("Kelembapan Udara = ");
  Serial.print(humidity_1);
  Serial.print("%\t");
  Serial.print("Suhu = ");
  Serial.print(celcius_1);
  Serial.print(" C\n");
  
}