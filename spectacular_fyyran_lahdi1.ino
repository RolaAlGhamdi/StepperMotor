void setup()
{
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  delay(10); // Delay a little bit to improve simulation performance
}