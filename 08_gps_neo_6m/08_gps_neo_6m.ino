#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <TinyGPS.h>
#include <SoftwareSerial.h>

const int lcd_cols = 16;
const int lcd_rows = 2;

const int gpxRX = 3;
const int gpsTX = 4;

LiquidCrystal_I2C lcd(0x27, lcd_cols, lcd_rows);
void write_gps();

TinyGPS gps;
SoftwareSerial swSerial(gpsRX, gpsTX);

void setup() {
  lcd.begin(lcd_cols, lcd_rows);
  lcd.backlight();
  lcd.print("Initializing");
  lcd.setCursor(0, 1);
  lcd.print("...");

  swSerial.begin(9600);
}

void loop() {
  write_gps();

  delay(200);
}

void write_gps() {
}
