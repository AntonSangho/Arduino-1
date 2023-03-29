

void setup()
{
  for (int i = 1; i <= 8; i++) {
  	pinMode(i, OUTPUT);
  }
}

void loop()
{
  for (int i = 1; i <= 8; i++) {
    digitalWrite(i, HIGH);
    }
    delay(1000);
  
  for (int i = 8; i > 0; i--) {
  		digitalWrite(i, LOW);
    }
 	delay(1000);
}