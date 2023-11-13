class Poti {
private:
  int pin;
  float value;

public:
  Poti(int pin) : pin(pin), value(0.0) {}

  void readValue() {
    value = analogRead(pin);
    value = map(value, 0, 4095, 0, 100);
  }

  float getValue() {
    return value;
  }
};

class Slider {
private:
  int pin;
  float value;

public:
  Slider(int pin) : pin(pin), value(0) {}

  void readValue() {
    value = analogRead(pin);
    value = map(value, 0, 4095, 0, 100);
  }

  float getValue() {
    return value;
  }
};

Poti poti1(2);
Poti poti2(0);
Poti poti3(4);
Slider slider(15);



void setup() {
  Serial.begin(115200);
  Serial.println("------------------");
  Serial.println("- Werte auslesen -");
  Serial.println("------------------");
}

void loop() {
  Poti* potis[] = {&poti1, &poti2, &poti3};
  
  for (int i = 0; i < 3; i++) {
    potis[i]->readValue();
    Serial.print("P");
    Serial.print(i + 1);
    Serial.print(" Value: ");
    Serial.print(potis[i]->getValue());
    Serial.println("%");
  }

  slider.readValue();
  Serial.print("S Value: ");
  Serial.print(slider.getValue());
  Serial.println("%");

  Serial.println("----------");
  Serial.println();
  delay(5000);
}
