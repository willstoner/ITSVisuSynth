int pin_list[3] = {2, 0, 4};
float read_value = 0.0;
float out_value = 0.0;

void setup() {
  Serial.begin(115200);
  Serial.println("-----------------------");
  Serial.println("- Poti-Werte auslesen -");
  Serial.println("-----------------------");
}

void loop() {
  for(int i = 0; i < 3; i++){
    read_value = analogRead(pin_list[i]);
    out_value = map(read_value, 0, 4095, 0, 100); // 4095 is maximum value of Poti Signal. Different on every Poti.
    Serial.print("P");
    Serial.print(i+1);
    Serial.print(" Value: ");
    Serial.print(out_value);
    Serial.println("%");
  }
  Serial.println("----------");
  delay(5000);
  
}
