int pin_list[3] = {2, 0, 4};
int s_pin = 15;
float p_read_value;
float p_out_value;
float s_read_value;
float s_out_value;

void setup() {
  Serial.begin(115200);
  Serial.println("------------------");
  Serial.println("- Werte auslesen -");
  Serial.println("------------------");
}

void loop() {
  for(int i = 0; i < 3; i++){
    p_read_value = analogRead(pin_list[i]);
    p_out_value = map(p_read_value, 0, 4095, 0, 100); // 4095 is maximum value of Poti Signal. Different on every Poti.
    Serial.print("P");
    Serial.print(i+1);
    Serial.print(" Value: ");
    Serial.print(p_out_value);
    Serial.println("%");
  }
  s_read_value = analogRead(s_pin);
  s_out_value = map(s_read_value, 0, 4095, 0, 100); // 4095 is maximum value of Poti Signal. Different on every Poti.
  Serial.print("S Value:");
  Serial.print(s_out_value);
  Serial.println("%");
  Serial.println("----------");
  delay(5000);
  
}
