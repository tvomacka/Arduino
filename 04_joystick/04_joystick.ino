const int xLeft = 3;
const int xRight = 5;
const int yUp = 6;
const int yDown = 9;
const int pressedLED = 11; 

const int xIn = A0;
const int yIn = A2;
const int pressedIn = 12;

int x = 0, y = 0;

void setup() {
  pinMode(xLeft, OUTPUT);
  pinMode(xRight, OUTPUT);
  pinMode(yUp, OUTPUT);
  pinMode(yDown, OUTPUT);
  pinMode(pressedLED, OUTPUT);

  pinMode(pressedIn, INPUT);

  Serial.begin(9600);
}

void loop() {
  int currentX = analogRead(xIn);
  int currentY = analogRead(yIn);
  int currentPressed = digitalRead(pressedIn);

  digitalWrite(pressedLED, currentPressed);
  x = currentX - 512;
  if (x > 0) {
    int xVal = map(x, 0, 512, 0, 255);
    analogWrite(xRight, xVal);
    analogWrite(xLeft, 0);
  }
  else {
    int xVal = map(-x, 0, 512, 0, 255);
    analogWrite(xRight, 0);
    analogWrite(xLeft, xVal);
  }

  y = currentY - 512;
  if (y > 0) {
    int yVal = map(y, 0, 512, 0, 255);
    analogWrite(yUp, yVal);
    analogWrite(yDown, 0);
  }
  else {
    int yVal = map(-y, 0, 512, 0, 255);
    analogWrite(yUp, 0);
    analogWrite(yDown, yVal);
  }

  delay(100);
}
