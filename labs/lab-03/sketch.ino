#include <Servo.h>
#include <LiquidCrystal_I2C.h>

Servo shade;
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int THRESHOLD = 670;
const char TEAM_NAME[] = "Team 9";

void setup() {
  Serial.begin(9600);
  shade.attach(9);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print(TEAM_NAME);
}

void loop() {
  int reading = analogRead(A0);
  int angle = 90;

  if (reading < THRESHOLD) {
    angle = 0;
  } else {
    angle = 90;
  }

  shade.write(angle);

  lcd.setCursor(0, 1);
  lcd.print("A0:");
  if (reading < 1000) lcd.print(" ");
  if (reading < 100) lcd.print(" ");
  if (reading < 10) lcd.print(" ");
  lcd.print(reading);
  if (angle == 0) {
    lcd.print(" CMD:SHUT");
  } else {
    lcd.print(" CMD:OPEN");
  }

  Serial.print(TEAM_NAME);
  Serial.print(" | reading=");
  Serial.print(reading);
  Serial.print(", commanded_angle=");
  Serial.println(angle);
  delay(500);
}