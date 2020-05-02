void setup() {
  Serial.begin (9600);
  int a = 7 ;
  while (a < 12)
  {
    pinMode (a, OUTPUT);
    a++;
  }
}
void loop() 
{
  int b = 45 ;
  while (b > 5)
    {
    int a = 7 ;
    while ( a < 12 )
  {
      delay(b);
      digitalWrite (a, HIGH);
      delay (b);
      digitalWrite (a, LOW);
      delay (b);
      a++;
  }    
  for (int a =12 ; a > 7 ; a--)
  {
      delay (b);
      digitalWrite (a, HIGH);
      delay (b);
      digitalWrite (a, LOW);
      delay (b);
  }   b--;
    }
}
