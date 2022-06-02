void displaySetup()
{
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.print("Wash your hands");
  lcd.setCursor(0, 1);
  lcd.print("before you enter");
  delay(2000);
  lcd.clear();
    
}
