/*
Auslesen von Slide Poti mit ESP32
*/



float floatMap(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin GPIO36:
  int analogValue = analogRead(36);
  // Rescale to potentiometer's voltage (from 0V to 3.3V):
  int voltage = map(analogValue, 0, 4095, 0, 3.3);
  float voltage1 = floatMap(analogValue, 0, 4095, 0, 3.3);

  // print out the value you read:
  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(", Voltage: ");
  Serial.println(voltage);

  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(", Float Voltage: ");
  Serial.println(voltage1);
  delay(1000);
}
