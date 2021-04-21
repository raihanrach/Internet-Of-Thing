// ogi sinatra Proyek 2 Mini Traffic Lights
int ledDelay = 10000; // delay Pada setiap perubahan
int yellowPin = 9;
int bluePin = 8;

void setup() {
//  pinMode(redPin, OUTPUT);
	pinMode(yellowPin, OUTPUT);
	pinMode(bluePin, OUTPUT);
}
void loop() {

//  
//  digitalWrite(redPin, LOW);
//  digitalWrite(redPin, HIGH);
//  digitalWrite(redPin, LOW);
//  delay(2000);
//  delay(ledDelay);
//  
//  digitalWrite(yellowPin, LOW);
//  digitalWrite(yellowPin, HIGH);
//  digitalWrite(yellowPin, LOW);
//  delay(2000);
//  delay(ledDelay);
//
//  digitalWrite(greenPin, LOW);
//  digitalWrite(greenPin, HIGH);
//  digitalWrite(greenPin, LOW);
//  delay(2000);
//  delay(ledDelay);

  digitalWrite(bluePin, LOW);
	digitalWrite(yellowPin, HIGH); // Nyalakan LED Kuning
	delay(2000); // tunda 2 detik
  digitalWrite(yellowPin, LOW); // OFF kan LED Kuning
	digitalWrite(bluePin, HIGH); // Nyalakan LED Hijau
  digitalWrite(bluePin, LOW); // OFF kan LED Kuning
  delay(2000); // tunda 2 detik
	digitalWrite(yellowPin, LOW); // OFF kan LED Kuning
  delay(ledDelay); // tunda beberapa milisecond
  digitalWrite(bluePin, HIGH); // Nyalakan LED Hijau
	digitalWrite(yellowPin, LOW); // OFF kan LED Kuning
	delay(2000); // Tunda 2 detik

	// Loop akan terus berulang
}
