/*
This is an implementation to show the working of 
wiper system of a car. 
The switch at the middle represents the ignition switch,the switch 
towards its right represents the wiper switch and the switch to
its left is to select the mode
Author: Jaykrishnan Nair
*/
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(4, INPUT);
  pinMode(6, INPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  
}

void loop()
{
  int wiper=digitalRead(6);
  int ign=digitalRead(4);
  int mode=digitalRead(3);
  if(ign==0)// ignition turned on
  {
    digitalWrite(13,HIGH);
    if(wiper==0)//Wiper system turned on
    {
      digitalWrite(10,HIGH);
      if(mode==0)
      {
        int p;
         p=analogRead(A0);
  		 int potval = map(p,0,1023,0,255);

         if(potval == 0)
          {
           Serial.println("No Rain");
           analogWrite(5,0);
          }
         else if(potval > 0 && potval < 63)
          {
           Serial.println("Low Rain");
           analogWrite(5,63);
           digitalWrite(0,HIGH);
           digitalWrite(1,LOW);
           digitalWrite(2,LOW);
          }
         else if(potval > 63 && potval < 127)
          {
           Serial.println("Moderate Rain");
           analogWrite(5,127);
           digitalWrite(1,HIGH);
           digitalWrite(2,LOW);
           digitalWrite(0,LOW);
          }
         else if(potval > 127 && potval < 255)
          {
           Serial.println("Heavy Rain!!!");
           analogWrite(5,255);
           digitalWrite(2,HIGH);
           digitalWrite(1,LOW);
           digitalWrite(0,LOW);
          }
         else
        {
         analogWrite(5,0);
         digitalWrite(0,LOW);
         digitalWrite(1,LOW);
         digitalWrite(2,LOW);
        }
      }
      else
      {
       digitalWrite(5,HIGH);
        digitalWrite(0,LOW);
         digitalWrite(1,LOW);
         digitalWrite(2,LOW);


      }
     digitalWrite(10,LOW);
      

    }
  digitalWrite(13,LOW);
        
  }
else
{
digitalWrite(0,LOW);
         digitalWrite(1,LOW);
         digitalWrite(2,LOW);

}
}







