int diodes[] = {3, 5};
int diodeCount = 2;
int sw = 12;
int active = 0;
int lastSwitchState = 0;

int TIME_DELAY = 100;

void setup() {
  for (int i = 0; i < diodeCount; i++) {
    pinMode(diodes[i], OUTPUT);
  }
  pinMode(sw, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < diodeCount; i++) {
    if (i == active) {
      digitalWrite(diodes[i], HIGH);
    }
    else {
      digitalWrite(diodes[i], LOW);
    }
  }
  
  int switchState = digitalRead(sw);
  if(switchState != lastSwitchState) {
    switchStateChanged(switchState, lastSwitchState);
  }

  lastSwitchState = switchState;
}

void switchStateChanged(int current, int last) {
  if(current = LOW && last == HIGH) {
    active = (active + 1) % diodeCount;
  }
}
