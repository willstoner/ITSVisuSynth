int analogPin = 2;
float read_value = 0.0;
float out_value = 0.0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  read_value = analogRead(analogPin);
  out_value = map(read_value, 0, 4095, 0, 100); // 4095 is maximum value of Poti Signal. Different on every Poti.
  Serial.print("Poti Value: ");
  Serial.print(out_value);
  Serial.println("%");
  delay(2);
}
