#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define trig 9
#define echo 10
const int sensor = 3; 
const int Relay = 6;
int state;
int value; 
long duration;
int distance;
void setup() {
  lcd.begin(16,2);
  lcd.backlight();
  
  lcd.print("Wash your hands");
  lcd.setCursor(0,1);
  lcd.print("before you enter");
  servo.attach(9); 
  pinMode(trig, OUTPUT); 
  pinMode(echo, INPUT); 
  pinMode(sensor, INPUT); 
  pinMode(Relay, OUTPUT); 
  Serial.begin(9600); 
}
void loop() {
  digitalWrite(trig, LOW); 
  delayMicroseconds(5);
  digitalWrite(trig, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trig, LOW); 
  value=digitalRead(sensor); 
  duration = pulseIn(echo, HIGH); 
  distance = (duration/2) * (331.3/10000);
  Serial.println(distance);
  if(distance>1 && distance<15){ 
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("Hands detected");
    lcd.setCursor(0,1);
    lcd.print("Wash hands - 20s");
    digitalWrite(Relay, HIGH); 
    state=1;
    delay(1000); 
    lcd.clear();
    lcd.print("You are safe now");
  }else{
    digitalWrite(Relay, LOW); 
   } 
}
