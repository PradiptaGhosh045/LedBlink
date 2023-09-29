const int LedPin = 13;
int LedState = 0;
void setup()
{
  pinMode(LedPin, OUTPUT);
  digitalWrite(LedPin, LedState);
}

void loop()
{  
  LedState =~LedState;
  digitalWrite(LedPin, LedState);// It will toggle the Led State
  delay(1000);  
}
