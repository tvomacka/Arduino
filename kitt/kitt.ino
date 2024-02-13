int diodes[] = {2, 3, 4, 5, 6, 7, 8, 9};
int diodeCount = 8;
int active = 0;
int increment = 1;
int TIME_DELAY = 100;

void setup() {
  for (int i = 0; i < diodeCount; i++) {
    pinMode(diodes[i], OUTPUT);
  }
  
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < diodeCount; i++) {
    if (i == active) {
      digitalWrite(diodes[i], HIGH);

      Serial.print("Active port: ");
      Serial.println(diodes[i]);
    }
    else {
      digitalWrite(diodes[i], LOW);
    }
  }

  if (active == 0 && increment < 0) {
    increment = 1;
  }
  if (active == (diodeCount - 1) && increment > 0) {
    increment = -1;
  }
  active += increment;
  
  delay(TIME_DELAY);
  
  
}
