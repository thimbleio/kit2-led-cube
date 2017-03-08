## Coding examples and challenges

Brush up on your coding skills with some examples of what you can do with your new LED cube.

### Code examples that do not use the IMU

#### spell.ino
Modify the code below to spell out your name!
```C++
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      96

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


void setup() { 
  pixels.begin(); // This initializes the NeoPixel library.
  randomSeed(analogRead(0));
}

//  0  1  2  3
//  4  5  6  7
//  8  9 10 11
// 12 13 14 15

  int a[] = {12, 0, 1, 2, 3, 4, 7, 8, 9, 10, 11, 12, 15};
  int b[] = {11, 0, 4, 5, 6, 7, 8, 11, 12, 13, 14, 15};
  int c[] = {10, 0, 1, 2, 3, 4, 8, 12, 13, 14, 15};
  int d[] = {10, 0, 1, 2, 4, 7, 8, 11, 12, 13, 14};
  int e[] = {12, 0, 1, 2, 3, 4, 5, 6, 8, 12, 13, 14, 15};
  int f[] = {9, 0, 1, 2, 3, 4, 8, 9, 10, 12};
  int g[] = {11, 0, 1, 2, 3, 4, 8, 11, 12, 13, 14, 15};
  int h[] = {10, 0, 3, 4, 7, 8, 9, 10, 11, 12, 15};
  int i[] = {10, 0, 1, 2, 3, 5, 9, 12, 13, 14, 15};
  int j[] = {11, 0, 1, 2, 3, 7, 8, 11, 12, 13, 14, 15};
  int k[] = {9, 0, 2, 3, 4, 5, 8, 10, 12, 15};
  int l[] = {7, 0, 4, 8, 12, 13, 14, 15};
  int m[] = {11, 0, 1, 2, 3, 4, 5, 7, 8, 11, 12, 15};
  int n[] = {10, 0, 3, 4, 5, 7, 8, 10, 11, 12, 15};
  int o[] = {12, 0, 1, 2, 3, 4, 7, 8, 11, 12, 13, 14, 15};
  int p[] = {11, 0, 1, 2, 3, 4, 7, 8, 9, 10, 11, 12};
  int q[] = {11, 0, 1, 2, 3, 4, 7, 8, 11, 12, 13, 15};
  int r[] = {12, 0, 1, 2, 3, 4, 7, 8, 9, 10, 11, 12, 14};
  int s[] = {8, 0, 1, 2, 5, 10, 12, 13, 14};
  int t[] = {7, 0, 1, 2, 3, 5, 9, 13};
  int u[] = {10, 0, 3, 4, 7, 8, 11, 12, 13, 14, 15};
  int v[] = {8, 0, 3, 4, 7, 8, 11, 13, 14};
  int w[] = {11, 0, 3, 4, 7, 8, 10, 11, 12, 13, 14, 15};
  int x[] = {8, 0, 3, 5, 6, 9, 10, 12, 15};
  int y[] = {9, 0, 3, 4, 7, 8, 9, 10, 11, 14};
  int z[] = {10, 0, 1, 2, 3, 6, 9, 12, 13, 14, 15};
  int plus[] = {5, 5, 8, 9, 10, 13};
  int smile[] = {6, 0, 3, 8, 11, 13, 14};


void loop() {
  delay(1000); clear_all();
  spell(a,0);
  delay(1000); clear_all();
  spell(b,0);
  delay(1000); clear_all(); 
  spell(c,0);
  delay(1000); clear_all(); 
  spell(d,0);
  delay(1000); clear_all();
  spell(e,0);
  delay(1000); clear_all();
  spell(f,0);
  delay(1000); clear_all(); 
  spell(g,0);
  delay(1000); clear_all(); 
  spell(h,0);
  delay(1000); clear_all(); 
  spell(i,0);
  delay(1000); clear_all(); 
  spell(j,0);
  delay(1000); clear_all(); 
  spell(k,0);
  delay(1000); clear_all(); 
  spell(l,0);
  delay(1000); clear_all(); 
  spell(m,0);
  delay(1000); clear_all(); 
  spell(n,0);
  delay(1000); clear_all(); 
  spell(o,0);
  delay(1000); clear_all(); 
  spell(p,0);
  delay(1000); clear_all(); 
  spell(q,0);
  delay(1000); clear_all(); 
  spell(r,0);
  delay(1000); clear_all(); 
  spell(s,0);
  delay(1000); clear_all(); 
  spell(t,0);
  delay(1000); clear_all(); 
  spell(u,0);
  delay(1000); clear_all(); 
  spell(v,0);
  delay(1000); clear_all(); 
  spell(w,0);
  delay(1000); clear_all(); 
  spell(x,0);
  delay(1000); clear_all(); 
  spell(y,0);
  delay(1000); clear_all(); 
  spell(z,0);
  delay(1000); clear_all(); 
  spell(smile,0);
  delay(1000); clear_all();
  rainbow_spell(34);
  delay(1000); clear_all();
 }


void clear_all(){
  for(int i=0; i<pixels.numPixels(); i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
  }
  pixels.show();
}

void spell(int letter[], int offset){
  for(int i=1;i<=letter[0];i++){
    pixels.setPixelColor(letter[i]+offset, pixels.Color(0,0,150)); // Moderately bright green color.
  } 
  pixels.show();
}

void spell_rainbow(int letter[], int offset, int color){
  for(int i=1;i<=letter[0];i++){
    pixels.setPixelColor(letter[i]+offset, Wheel((i+color)%255)); // Moderately bright green color.
  } 
  pixels.show();
}

//Theatre-style crawling lights with rainbow effect
void rainbow_spell(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    spell_rainbow(t, 0, j);
    spell_rainbow(h, 16, j);
    spell_rainbow(i, 32, j);
    spell_rainbow(m, 48, j);
    spell_rainbow(b, 64, j);
    spell_rainbow(l, 80, j);
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return pixels.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return pixels.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return pixels.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
```

#### Dice
Use your LED cube and the random() function to roll a digital die.

```C++
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      96

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() { 
  pixels.begin(); // This initializes the NeoPixel library.
  randomSeed(analogRead(0));
}

// 0 0 0 0
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0

// start dice
// 1 = 0400
// 2 = 8020
// 3 = 8420
// 4 = A0A0
// 5 = A4A0
// 6 = AAA0

static const unsigned int dice[] = {
/* cube face:

 0 0 0 0
 0 0 0 0
 0 0 0 0
 0 0 0 0

 for a single die, we are using the 3x3 square in the upper left corner of a single face of the cube

 so, 1 is represented as:

 0 0 0 0 = 0 in hex
 0 1 0 0 = 8 in hex (convert 0100 in binary to hex)
 0 0 0 0 = 0 in hex
 0 0 0 0 = 0 in hex

 and 5 is represented as:

 1 0 1 0 = A in hex
 0 1 0 0 = 4 in hex
 1 0 1 0 = A in hex
 0 0 0 0 = 0 in hex
 */
 
//  0  1  2  3
//  4  5  6  7
//  8  9 10 11
// 12 13 14 15

  0x0400, // = 1
  0x8020, // = 2
  0x8420, // = 3
  0xA0A0, // = 4
  0xA4A0, // = 5
  0xAAA0  // = 6
  
};

void display_die_face(uint8_t number, uint8_t offset, uint32_t color){
  uint8_t n = number-1;
  if(n<0) n=0;
  for(int i=3; i>=0; i--){
    for(int j=3; j>=0; j--){
      if(dice[n] & (1<<(i*4+j)) ){
        pixels.setPixelColor((3-i)*4+(3-j)+offset, color);
      }
    }
  }
  pixels.show();
}

void display_die(uint8_t number, uint32_t color){
  uint8_t n = number-1;
  if(n<0) n=0;
  switch(n%6){
      case 0://1
        display_die_face(1,0,color);
        display_die_face(2,16,color);
        display_die_face(3,32,color);
        display_die_face(5,48,color);
        display_die_face(4,64,color);
        display_die_face(6,80,color);
        break;
      case 1://2
        display_die_face(2,0,color);
        display_die_face(6,16,color);
        display_die_face(3,32,color);
        display_die_face(1,48,color);
        display_die_face(4,64,color);
        display_die_face(5,80,color);
        break;
      case 2: //3
        display_die_face(3,0,color);
        display_die_face(6,16,color);
        display_die_face(5,32,color);
        display_die_face(1,48,color);
        display_die_face(2,64,color);
        display_die_face(4,80,color);
        break;
      case 3://4
        display_die_face(4,0,color);
        display_die_face(6,16,color);
        display_die_face(2,32,color);
        display_die_face(1,48,color);
        display_die_face(5,64,color);
        display_die_face(3,80,color);
        break;
      case 4://5
        display_die_face(5,0,color);
        display_die_face(6,16,color);//5
        display_die_face(4,32,color);
        display_die_face(1,48,color);
        display_die_face(3,64,color);
        display_die_face(2,80,color);
        break;
      case 5:
        display_die_face(6,0,color);
        display_die_face(3,16,color);//5
        display_die_face(2,32,color);
        display_die_face(4,48,color);
        display_die_face(5,64,color);
        display_die_face(1,80,color);
        break;
    }
}
void clear_all(){
  for(int i=0; i<pixels.numPixels(); i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
  }
  pixels.show();
}
void roll_die(uint32_t color){
  long r = random(60);
  for(int i=1; i<r; i++){
    clear_all();
    display_die(i%7, color);
    delay(30+10*(i));
  }
}


void loop() {  
  for(int i=0; i<3; i++){
    roll_die(Wheel(random(255)));
    delay(5000);
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return pixels.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return pixels.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return pixels.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
```

#### Animations
Get some inspriation for cool animations from the code below.

```C++
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      96

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() { 
  pixels.begin(); // This initializes the NeoPixel library.
  randomSeed(analogRead(0));
}

void loop() {
  uint32_t color = pixels.Color(0, 128, 0);
  go_kitt();
  colorWipe(color, 20);
  animated_clear();
 }


void go_kitt(){
  for(int i=3; i<16; i+=4){
    knight_rider(0, i, 50);
  }
}
void clear_all(){
  for(int i=0; i<pixels.numPixels(); i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
  }
  pixels.show();
}

void animated_clear(){
  for(int i=0; i<pixels.numPixels(); i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    if(i<pixels.numPixels()-1) pixels.setPixelColor(i+1, pixels.Color(0,0,125));
    
    if(i<pixels.numPixels()-2) pixels.setPixelColor(i+2, pixels.Color(0,0,125));
    if(i<pixels.numPixels()-3) pixels.setPixelColor(i+3, pixels.Color(0,0,125));
    pixels.show();
    delay(50);
  }
}

void knight_rider(int minn, int maxn, int delayval){
  for(int i=minn; i<maxn; i++){
    pixels.setPixelColor(i, pixels.Color(150,0,0));
    pixels.setPixelColor(i+1, pixels.Color(150,0,0));
    if(i>minn){
      pixels.setPixelColor(i-1, pixels.Color(0,0,0));
    }
    delay(delayval);
    pixels.show();
  }
  delay(500);
  for(int i=maxn; i>minn; i--){
    pixels.setPixelColor(i, pixels.Color(150,0,0));
    pixels.setPixelColor(i-1, pixels.Color(150,0,0));
    if(i<maxn){
      pixels.setPixelColor(i+1, pixels.Color(0,0,0));
    }
    delay(delayval);
    pixels.show();
  }
    delay(500);
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<pixels.numPixels(); i++) {
    pixels.setPixelColor(i, c);
    pixels.show();
    delay(wait);
  }
}
```

### Code examples that use the IMU

#### MPU6050-test.ino
The code below uses the MPU6050 to control the LED Cube

```C++
// I2C device class (I2Cdev) demonstration Arduino sketch for MPU6050 class
// 10/7/2011 by Jeff Rowberg <jeff@rowberg.net>
// Updates should (hopefully) always be available at https://github.com/jrowberg/i2cdevlib
//
// Changelog:
//      2013-05-08 - added multiple output formats
//                 - added seamless Fastwire support
//      2011-10-07 - initial release

/* ============================================
I2Cdev device library code is placed under the MIT license
Copyright (c) 2011 Jeff Rowberg

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
===============================================
*/

// I2Cdev and MPU6050 must be installed as libraries, or else the .cpp/.h files
// for both classes must be in the include path of your project
#include "I2Cdev.h"

#include "MPU6050_6Axis_MotionApps20.h"
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
#include <EEPROM.h>

#define PIN 6
#define INTERRUPT_PIN 2
#define NUMPIXELS 96

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// class default I2C address is 0x68
// specific I2C addresses may be passed as a parameter here
// AD0 low = 0x68 (default for InvenSense evaluation board)
// AD0 high = 0x69
MPU6050 accelgyro;
//MPU6050 accelgyro(0x69); // <-- use for AD0 high


// MPU control/status vars
bool dmpReady = false;  // set true if DMP init was successful
uint8_t mpuIntStatus;   // holds actual interrupt status byte from MPU
uint8_t devStatus;      // return status after each device operation (0 = success, !0 = error)
uint16_t packetSize;    // expected DMP packet size (default is 42 bytes)
uint16_t fifoCount;     // count of all bytes currently in FIFO
uint8_t fifoBuffer[64]; // FIFO storage buffer

// orientation/motion vars
Quaternion q;           // [w, x, y, z]         quaternion container
VectorInt16 aa;         // [x, y, z]            accel sensor measurements
VectorInt16 aaReal;     // [x, y, z]            gravity-free accel sensor measurements
VectorInt16 aaWorld;    // [x, y, z]            world-frame accel sensor measurements
VectorFloat gravity;    // [x, y, z]            gravity vector
float euler[3];         // [psi, theta, phi]    Euler angle container
float ypr[3];           // [yaw, pitch, roll]   yaw/pitch/roll container and gravity vector
int yawLast;
int pitchLast;
int rollLast;
int yaw;
int pitch;
int roll;

int motionMeter = 0;

long int rainbowTime = 0;
bool rainbowStart = true;

// ================================================================
// ===               INTERRUPT DETECTION ROUTINE                ===
// ================================================================

volatile bool mpuInterrupt = false;     // indicates whether MPU interrupt pin has gone high
void dmpDataReady() {
    mpuInterrupt = true;
}




void setup() {

  pixels.begin();
  randomSeed(analogRead(0));

  // join I2C bus (I2Cdev library doesn't do this automatically)
  #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
      Wire.begin();
      Wire.setClock(400000);
  #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
      Fastwire::setup(400, true);
  #endif

  Serial.begin(115200);

  // initialize device
  Serial.println("Initializing I2C devices...");
  accelgyro.initialize();
  pinMode(INTERRUPT_PIN, INPUT);

  // verify connection
  Serial.println("Testing device connections...");
  Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");

  Serial.println(F("Initializing DMP..."));
  devStatus = accelgyro.dmpInitialize();

  // supply your own gyro offsets here, scaled for min sensitivity
  //read MPU6050 offsets from EEPROM, constructing int from 2 single-byte memory locations
  int xAccelOff = EEPROM.read(1)<<8 | EEPROM.read(0);
  int yAccelOff = EEPROM.read(3)<<8 | EEPROM.read(2);
  int zAccelOff = EEPROM.read(5)<<8 | EEPROM.read(4);
  int xGyroOff = EEPROM.read(7)<<8 | EEPROM.read(6);
  int yGyroOff = EEPROM.read(9)<<8 | EEPROM.read(8);
  int zGyroOff = EEPROM.read(11)<<8 | EEPROM.read(10);

  //uncomment this to calibrate
  /*
  accelgyro.setDMPEnabled(false);
  dmpReady = false;

  // parameters are addresses of the 6 offsets,
  // and a boolean to determine whether the MPU is upside down or not
  accelgyro.calibrate(&xAccelOff, &yAccelOff, &zAccelOff,
                &xGyroOff, &yGyroOff, &zGyroOff, true);

  accelgyro.setDMPEnabled(true);
  dmpReady = true;

  EEPROM.write(0, xAccelOff & 0xFF);
  EEPROM.write(1, xAccelOff>>8 & 0xFF);
  EEPROM.write(2, yAccelOff & 0xFF);
  EEPROM.write(3, yAccelOff>>8 & 0xFF);
  EEPROM.write(4, zAccelOff & 0xFF);
  EEPROM.write(5, zAccelOff>>8 & 0xFF);
  EEPROM.write(6, xGyroOff & 0xFF);
  EEPROM.write(7, xGyroOff>>8 & 0xFF);
  EEPROM.write(8, yGyroOff & 0xFF);
  EEPROM.write(9, yGyroOff>>8 & 0xFF);
  EEPROM.write(10, zGyroOff & 0xFF);
  EEPROM.write(11, zGyroOff>>8 & 0xFF);
*/
//uncomment to calibrate

  accelgyro.setXAccelOffset(xAccelOff);
  accelgyro.setYAccelOffset(yAccelOff);
  accelgyro.setZAccelOffset(zAccelOff);
  accelgyro.setXGyroOffset(xGyroOff);
  accelgyro.setYGyroOffset(yGyroOff);
  accelgyro.setZGyroOffset(zGyroOff);

  if (devStatus == 0) {                   // make sure it worked (returns 0 if so)
      Serial.println(("Enabling DMP..."));        // turn on the DMP, now that it's ready
      accelgyro.setDMPEnabled(true);

      attachInterrupt(digitalPinToInterrupt(INTERRUPT_PIN), dmpDataReady, RISING);        // enable Arduino interrupt detection
      mpuIntStatus = accelgyro.getIntStatus();

      Serial.println(("DMP ready! Waiting for first interrupt..."));  // set our DMP Ready flag so the main loop() function knows it's okay to use it
      dmpReady = true;

      packetSize = accelgyro.dmpGetFIFOPacketSize();    // get expected DMP packet size for later comparison
  }
}

void clear_all(){
  for(int i=0; i<pixels.numPixels(); i++){
    pixels.setPixelColor(i, pixels.Color(0,0,0));
  }
  pixels.show();
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return pixels.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return pixels.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return pixels.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

void colorSide(uint8_t startLED, uint32_t color){
  startLED *= 16;
  for(int i = startLED; i<startLED+16; i++){
    pixels.setPixelColor(i, color);
    //delay(50);
  }
  pixels.show();
}

uint32_t color;

void loop() {

  // if programming failed, don't try to do anything
  if (!dmpReady) return;

  // wait for MPU interrupt or extra packet(s) available
  while (!mpuInterrupt && fifoCount < packetSize) {
  }

  // reset interrupt flag and get INT_STATUS byte
  mpuInterrupt = false;
  mpuIntStatus = accelgyro.getIntStatus();

  // get current FIFO count
  fifoCount = accelgyro.getFIFOCount();

  // check for overflow (this should never happen unless our code is too inefficient)
  if ((mpuIntStatus & 0x10) || fifoCount == 1024) {
      // reset so we can continue cleanly
      accelgyro.resetFIFO();
      Serial.println(F("FIFO overflow!"));

  // otherwise, check for DMP data ready interrupt (this should happen frequently)
  } else if (mpuIntStatus & 0x02) {
      while (fifoCount < packetSize) fifoCount = accelgyro.getFIFOCount();

      // read a packet from FIFO
      accelgyro.getFIFOBytes(fifoBuffer, packetSize);

      // track FIFO count here in case there is > 1 packet available
      // (this lets us immediately read more without waiting for an interrupt)
      fifoCount -= packetSize;

      accelgyro.dmpGetQuaternion(&q, fifoBuffer);
      accelgyro.dmpGetGravity(&gravity, &q);
      accelgyro.dmpGetYawPitchRoll(ypr, &q, &gravity);

      yaw = 100*ypr[0];
      pitch = 100*ypr[1];
      roll = 100*ypr[2];



      Serial.print(yaw); Serial.print(", ");
      Serial.print(pitch); Serial.print(", ");
      Serial.println(roll);


      bool yawCheck = abs(yaw) < abs(yawLast)+1
                   && abs(yaw) > abs(yawLast)-1;
      bool pitchCheck = abs(pitch) < abs(pitchLast)+1
                   && abs(pitch) > abs(pitchLast)-1;
      bool rollCheck = abs(roll) < abs(rollLast)+1
                   && abs(roll) > abs(rollLast)-1;

      if(yawCheck && pitchCheck && rollCheck){
        motionMeter--;
      } else{
        motionMeter++;
      }

      yawLast = yaw;
      pitchLast = pitch;
      rollLast = roll;
  }

  if(motionMeter > 500) motionMeter = 500;
  else if(motionMeter < 0) motionMeter = 0;

  Serial.println(motionMeter);


  if(motionMeter > 100){

    rainbowStart = true;
    int yawL = map(yaw, -314, 314, 0, 255);
    int pitchL = map(pitch, -158, 158, 0, 255);
    int rollL = map(roll, -158, 158, 0, 255);

    for(int i=0; i < 16; i++){
      pixels.setPixelColor(i, Wheel(yawL));
    }
    for(int i=80; i < 96; i++){
      pixels.setPixelColor(i, Wheel(yawL));
    }

    for(int i=16; i < 32; i++){
      pixels.setPixelColor(i, Wheel(pitchL));
    }
    for(int i=48; i < 64; i++){
      pixels.setPixelColor(i, Wheel(pitchL));
    }

    for(int i=32; i < 48; i++){
      pixels.setPixelColor(i, Wheel(rollL));
    }
    for(int i=64; i < 80; i++){
      pixels.setPixelColor(i, Wheel(rollL));
    }

    pixels.show();

  } else{

    if(rainbowStart){
      rainbowStart = false;
      rainbowTime = millis();
    }

    long int j = (millis() - rainbowTime) / 5;

    for(int i=0; i< pixels.numPixels(); i++) {
      pixels.setPixelColor(i, Wheel(((i * 256 / pixels.numPixels()) + j) & 255));
    }
    pixels.show();
  }


}
```

## Start Playing
Now have some fun!

![Congratulations, you build the LED Cube!](https://youtu.be/ydBOHHXOgkU)
![thumbnail](assets/images/thumbs/outro.jpg)
Now that you've build the cube, share your creation!
