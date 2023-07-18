#include <Servo.h>
int buzzer1 = 5;
Servo servo1;
Servo servo2;
int sound = 9;
int moisture = 4;



void setup() {
  servo1.attach(8);
  servo2.attach(10);
  servo1.write(0);
  servo2.write(0);
  pinMode(sound, INPUT);
  pinMode(buzzer1, OUTPUT);
  pinMode(moisture, INPUT);
}
void loop() {
  
  if (digitalRead(sound) == HIGH || digitalRead(moisture) == LOW) {
    digitalWrite(buzzer1, HIGH);
    delay(5000);
    digitalWrite(buzzer1, LOW);


    for (int a = 0; a <= 180; a++) {
      servo1.write(a);
      servo2.write(a);
      delay(7);
    }
    delay(5);
    for (int b = 180; b >= 0; b--) {
      servo1.write(b);
      servo2.write(b);
      delay(7);
    }
  }
}