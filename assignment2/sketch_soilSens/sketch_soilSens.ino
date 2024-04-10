// Sensor pins
#define sensorPin A0

void setup() {
  pinMode(16, OUTPUT);
  digitalWrite(16, LOW);
	Serial.begin(9600);
}

void loop() {
	//get the reading from the function below and print it
	Serial.print("Analog output: ");
	Serial.println(readSensor());
	
	delay(1000);
}

//  This function returns the analog soil moisture measurement
int readSensor() {						// Allow power to settle
	int val = analogRead(sensorPin);	// Read the analog value form sensor
	return val;							// Return analog moisture value
}