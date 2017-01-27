
//Set each color to a pin
int green=8;
int yellow=9;
int red=10;

void setup()
{
 //Set the pins as output
 pinMode(green,OUTPUT);
 pinMode(yellow,OUTPUT);
 pinMode(red,OUTPUT);
}

void loop()
{
  //Toggle yellow off and red on, then delay 20,000 millisecond (20 seconds)
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  delay(20000);
  
  //Toggle red off and green on, then delay 20,000 millisecond (20 seconds)
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(20000);
  
  //Toggle green off and yellow on, then delay 5,000 millisecond (5 seconds)
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(5000);
}
