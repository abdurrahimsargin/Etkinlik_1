void setup()
{
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(3, LOW);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(9, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(9, LOW);
  delay(200); // Wait for 200 millisecond(s)
}
