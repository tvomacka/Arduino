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
bool check_gps_update(int duration);

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

/**
  * Checks if new data are available from GPS.
  * duration: how long will the check last in milliseconds.
  * returns true if new data are obtained during the check period.
  */
bool check_gps_update(int duration) {
  unsigned long start = millis();
  unsigned long now = start;
  bool newData = false;

  while(now < start + duration) {
    while (swSerial.available()) {
      
      char c = swSerial.read();
      if (gps.encode(c)) {
        newData = true;
      }
    }
    
    now = millis();
  }

  return newData;
}


