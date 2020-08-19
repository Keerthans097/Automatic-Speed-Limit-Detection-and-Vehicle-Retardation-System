
int incomingByte;
int RPiMsg;

#include <LiquidCrystal.h>
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
LiquidCrystal lcd(9, 8, 7, 6, 5, 4);
int limit=130;
int potPin = A0; //Potentiometer input pin
int potValue1 = 0;
int potValue2 = 0; // final display variable
int Motorspeed = 0; //speed for motor from pot
  
  
  void setup() 
  {
  Serial.begin(9600);
    lcd.begin(16, 2);
    lcd.print("Motor speed");
    pinMode(10,OUTPUT);//7

   pinMode(11,OUTPUT);//8
    pinMode(2,OUTPUT);//9
    
    
    Motorspeed = analogRead(potPin) ;//4
    potValue1 = analogRead(potPin) / 10;
// divide by 1.02 to get percentage
    potValue2 = potValue1 / 0.8;//1.017}
    
 //   pinMode(buttonState, INPUT);
}



void loop()
{
  if (Serial.available())
  {
    // Resets RPiMsg
    RPiMsg = 0;

    // Read serial one byte at a time and convert ASCII to int
    while(true)
    {
      incomingByte = Serial.read();

      // Exit while-loop, end of message
      if (incomingByte == '\n') break;

      // If nothing is in the buffer, Serial1.read() = -1
      if (incomingByte == -1) continue;

      // Shift 1 decimal place left
      RPiMsg *= 10;

      // Convert ASCII to int
      RPiMsg = ((incomingByte - 48) + RPiMsg);
          delay(1000);

    }
    
    
    limit=RPiMsg;
     Serial.println(RPiMsg);
     
               if(potValue2 > limit)
               { potValue2=limit-2;
                        lcd.setCursor(0, 1);

                    lcd.print(potValue2);
                        lcd.print(" "); 
                       Motorspeed = potValue2     
                       delay(2000);
               }
     
     
     

  }
  
  
  
  lcd.setCursor(0, 1);
   lcd.print(potValue2);
    lcd.print(" ");
    delay(1);
    
    digitalWrite(10,HIGH);
digitalWrite(11,LOW);
analogWrite(2,Motorspeed);
//delay(100);
}
