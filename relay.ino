void relaySetup()
{
  pinMode(Relay, OUTPUT); // Configure the pin of the relay module as OUTPUT
}

void relayOn()
{
  digitalWrite(Relay, HIGH); //Turns on the submersible water pump or solenoid water valve
}

void relayOff()
{
  digitalWrite(Relay, LOW); //Turns on the submersible water pump or solenoid water valve
}
