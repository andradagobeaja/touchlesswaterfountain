void distanceSetup()
{
  pinMode(trig, OUTPUT); // Set the trigger pin as OUTPUT
  pinMode(echo, INPUT); // Set the echo pin as INPUT

}

void distanceFcn()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH); // Set the trigger pin HIGH to send the ultrasonic wave (pulse)
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH); // Calculate time taken (in microseconds) for the pulse emitted by the trigger pin to reach the echo pin.
  distance = (duration / 2) * (331.3 / 10000); // Calculate the distance from the sensor to the obstacle in cm, using the speed of sound in air(m/s) and the time taken (stored in duration variable)
  Serial.println(distance);
}
