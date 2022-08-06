const int led    =   8;   //name pin 8 as led
const int button =   9;   //name pin 9 as button 
void setup()
{
pinMode(led,OUTPUT);    //set pin 8 as OUTPUT
pinMode(button,INPUT)  ;  //set pin 9 as INPUT 
}
void loop()
{
   int reads = digitalRead(button); //read the digital value on pin 9
   digitalWrite(led,reads);   //set the digital output value of pin 8 to that value   
}
