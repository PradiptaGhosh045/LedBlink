const int LedPin = 13; // Define Led Connection to Arduino I/O Pin 13.
int LedState = 0; 
void setup()
{
  pinMode(LedPin, OUTPUT); // Define LedPin (Pin 13) as a Output Pin
  digitalWrite(LedPin, LedState); 
}

void loop()
{  
  LedState =~LedState; // It will toggle the Led State
  digitalWrite(LedPin, LedState); 
  delay(1000);  
}
