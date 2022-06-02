void distanceSetup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void distanceFcn()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH); 
  distance = (duration / 2) * (331.3 / 10000); 
  Serial.println(distance);
}
