
void setup()
{
  
  for (int i = 2; i <= 10; i ++)
  {
    pinMode(i, OUTPUT);
  }
  
}



void loop() 
{
  for (int i = 2; i <= 10; i++)
  {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }

  for (int i = 10; i >= 2; i --)
  {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }


  //LED

  for (int i = 2; i <= 10; i = i + 2)
  {
    digitalWrite(i, HIGH);
  }
  delay(700);
  PORTD = B00000000;
  PORTB = PORTB & B11000000;


  for (int i = 1; i <= 10; i = i + 2)
  {
    digitalWrite(i, HIGH);
  }
  delay(700);

  PORTD = B00000000;
  PORTB = PORTB & B11000000;
}
