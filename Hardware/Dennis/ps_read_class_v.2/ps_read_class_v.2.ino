#include <MIDI.h>

class Poti {
private:
  int pin;
  int next_value;
  int current_value;

public:
  Poti(int pin) : pin(pin), next_value(0), current_value(0) {}

  void readValue() {
    float value = analogRead(pin);
    next_value = map(value, 0, 4095, 1, 127);
  }

  int getNextValue() {
    return next_value;
  }

  int getCurrentValue(){
    return current_value;
  }

  void setCurrentValue(int value){
    current_value = value;

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
    value = map(value, 0, 4095, 0, 127);
  }

  float getValue() {
    return value;
  }
};

MIDI_CREATE_DEFAULT_INSTANCE();

Poti poti1(34);
// Poti poti2(0);
//Poti poti3(4);
//Slider slider(15);



void setup() {
  Serial.begin(115200);
  MIDI.begin(MIDI_CHANNEL_OMNI);
  Serial.println("------------------");
  Serial.println("- Werte auslesen -");
  Serial.println("------------------");
}

void loop() {
  Poti* potis[] = {&poti1};//, &poti2, &poti3};
  for (int i = 0; i < 1; i++) {
    if(potis[i]->getCurrentValue() != potis[i]->getNextValue()){
      Serial.print("P");
      Serial.print(i + 1);
      Serial.print(" Value: ");
      potis[i]->setCurrentValue(potis[i]->getNextValue());
      Serial.println(potis[i]->getCurrentValue());
      MIDI.sendControlChange(1, potis[i]->getCurrentValue(), 1);
    }
  }

  for (int i = 0; i < 3; i++) {
    potis[i]->readValue();
  }
}
