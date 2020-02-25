void setup() {
  pinMode(2,OUTPUT); // Enable pins
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT); // Speed pins (PWM)
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  // "Analog In" is hardware set as input

  byte speeds[4] = {0,0,0,0}; // Speeds, unsigned (0-255) deals with pins 9-13
  boolean direction[4] = {0,0,0,0}; // Directions, deals with pins 2-5
  /* Index numbers corresponding to motors and pins
    0(2,9)   1(3,10)
    2(4,11)  3(5,13)
  */
}

void loop() {
  // test
  
}
