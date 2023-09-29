const int Led = 13;
int LedState = 0;
void setup()
{
  pinMode(Led, OUTPUT);
  digitalWrite(Led, LedState);
}

void loop()
{
  LedState =~LedState; // It will toggle the Led State
  digitalWrite(Led, LedState);
  delay(1000);  
}
