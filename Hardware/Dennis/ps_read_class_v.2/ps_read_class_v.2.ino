#include <MIDI.h>

class Poti {
private:

public:
  int pin;
  float value;
  int current_midi_value;
  int new_midi_value;
  Poti(int pin) : pin(pin), value(0.0), current_midi_value(1), new_midi_value(1) {}

  void readValue() {
    value = analogRead(pin);
    value = map(value, 0, 4095, 0, 127);
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
  Poti* potis[] = {&poti1}; //, &poti2, &poti3
  
  for (int i = 0; i < 1; i++) {
    potis[i]->readValue();
    Serial.print("P");
    Serial.print(i + 1);
    Serial.print(" Value: ");
    Serial.println(potis[i]->getValue());
    Serial.println("send MIDI...");
    Serial.println(potis[i]->current_midi_value);
    //MIDI.sendControlChange(1, potis[i]->getValue(), 1);
  }

  //slider.readValue();
  //Serial.print("S Value: ");
  //Serial.print(slider.getValue());
  //Serial.println("%");

  //Serial.println("----------");
  //Serial.println();
  delay(500);
}
