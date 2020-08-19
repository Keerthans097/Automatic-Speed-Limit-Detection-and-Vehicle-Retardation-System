#include <LiquidCrystal.h>
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
LiquidCrystal lcd(9, 8, 7, 6, 5, 4);
int limit=130;
int potPin = A0; //Potentiometer input pin
int potValue1 = 0;
int potValue2 = 0; // final display variable
int Motorspeed = 0; //speed for motor from pot
//int buttonState = 0; 
void setup() {
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





void loop() {
//limit80 ,pot 100
//     Motorspeed = analogRead(potPin) ;//4
//    potValue1 = analogRead(potPin) / 10;
//// divide by 1.02 to get percentage
//    potValue2 = potValue1 / 0.8;//1.017
    
if (Serial.available() > 0)
{ 
  int  limit = Serial.parseInt();
  // int limit = (limit1[0] - '0') * 10 + limit1[1] - '0';
  //limit=limit+1;
    Serial.println(limit);

               if(potValue2 > limit)
               { potValue2=limit-2;
                        lcd.setCursor(0, 1);

                    lcd.print(potValue2);
                        lcd.print(" ");      
                delay(5000);
               }
                    //Motorspeed = potValue2 * 0.08 ;//4

}
    
        //if(potValue2 < limit){
          

  
    
      //set motor speed

  //      }
if(Serial.available()==0 && limit==130){
     Motorspeed = analogRead(potPin) ;//4
    potValue1 = analogRead(potPin) / 10;
    potValue2 = potValue1 / 0.8;//1.017
}

  lcd.setCursor(0, 1);
    lcd.print(potValue2);
    lcd.print(" ");
    delay(1);
    
    digitalWrite(10,HIGH);
digitalWrite(11,LOW);
analogWrite(2,Motorspeed);
delay(100);
      
        
        
        
        
        
//if (buttonState == HIGH); {
//  digitalWrite(7,LOW);
//}

}

