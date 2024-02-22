const int ledOut = 11; 

const int maxPWM = 255;
int currentPWM = 0;

void setup() {
  pinMode(ledOut, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  currentPWM = (currentPWM + 10) % maxPWM;
  analogWrite(ledOut, currentPWM);

  delay(10);
}
