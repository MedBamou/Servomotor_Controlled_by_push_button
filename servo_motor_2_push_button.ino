#include <Servo.h>
int button1 = 4;
int button2 = 8;
int press1 = 0;
int press2 = 0;
int i=0 ;
Servo servo1;

void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  servo1.attach(7);
  digitalWrite(4, HIGH); 
  digitalWrite(8,HIGH);
}

void loop()
{
  press1 = digitalRead(button1);
  press2 = digitalRead(button2);

  
 if ( press1 != LOW ){
       servo1.write(10);
       delay(1500);
       }
 else if (press2 != LOW){
        servo1.write(120);
        delay(1500);
       }
  }


