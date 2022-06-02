void relaySetup()
{
  pinMode(Relay, OUTPUT); 
}

void relayOn()
{
  digitalWrite(Relay, HIGH); 
}

void relayOff()
{
  digitalWrite(Relay, LOW);
}
