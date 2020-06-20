#include <Servo.h>
Servo s1;
Servo s2;
int i=0;




void setup()
{
  s1.attach(3);
  s2.attach(5);
}

void loop()
{
  for(i=360; i>0;i--){
    s1.write(i);
    s2.write(i);
  delay(10);
  }
  
}