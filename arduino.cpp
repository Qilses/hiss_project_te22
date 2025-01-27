  // C++ code
  //
  #include <Servo.h>

  int buttonUP = 0;

  int buttonDOWN = 0;

  int buttonSTOP = 0;
  int speed;
  int pos = 0;
  Servo servo_10;

  void setup()
  {
    pinMode(4, INPUT);
    pinMode(3, INPUT);
    pinMode(8, INPUT);
    Serial.begin(9600);
    servo_10.attach(10, 500, 2500);
    pos = map(speed, -100,100, 0, 100);
    servo_10.write(pos);
  }

  void loop()
  {
    buttonUP = digitalRead(4);
    buttonDOWN = digitalRead(3);
    buttonSTOP = digitalRead(8);
    Serial.println(buttonUP);
    Serial.println(buttonDOWN);
    Serial.println(buttonSTOP);

    if (buttonUP == 1) {
      speed = 0;
      servo_10.write(pos);
    }
    if (buttonDOWN == 1) {
      speed = 180;
      servo_10.write(pos);
    }
    delay(10); // Delay a little bit to improve simulation performance
  }