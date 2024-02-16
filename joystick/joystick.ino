const int xLeft = 2;
const int xRight = 4;
const int yUp = 6;
const int yDown = 8;
const int pressedLED = 10; 

const int xIn = A0;
const int yIn = A2;
const int pressedIn = 12;

void setup() {
  pinMode(xLeft, OUTPUT);
  pinMode(xRight, OUTPUT);
  pinMode(yUp, OUTPUT);
  pinMode(yDown, OUTPUT);
  pinMode(pressedLED, OUTPUT);

  Serial.begin(9600);
}