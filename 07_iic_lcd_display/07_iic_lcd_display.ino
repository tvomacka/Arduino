#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int lcd_cols = 16;
const int lcd_rows = 2;
int position = 0;

LiquidCrystal_I2C lcd(0x27, lcd_cols, lcd_rows);

void setup() {
  lcd.begin(lcd_cols, lcd_rows);
  lcd.backlight();
  lcd.print("Hello World");
  lcd.setCursor(0, 1);
  lcd.print("*---------------");
}

void loop() {
  lcd.setCursor(position, 1);
  lcd.print("-");
  position = (position + 1) % lcd_cols;
  lcd.setCursor(position, 1);
  lcd.print("*");

  delay(200);
}