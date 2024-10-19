//Blink Upgrade
const unsigned int greenDuration{ 1000 };
const unsigned int blueDuration{ 2000 };
unsigned long lastGreen{ greenDuration };
unsigned long lastBlue{ blueDuration };

const byte green{ A1 };
const byte blue{ A2 };

bool blueState = false;
bool greenState = true;

void setup() 
{
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() 
{
  if(millis() > lastGreen)
  {
    greenState = !greenState;
    digitalWrite(green, greenState);
    lastGreen = millis() + greenDuration;
  }
  if(millis() > lastBlue)
  {
    blueState = !blueState;
    digitalWrite(blue, blueState);
    lastBlue = millis() + blueDuration; 
  }
  
  
  
  /*digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  delay(1000);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(1000);*/

}
