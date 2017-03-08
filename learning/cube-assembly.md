## Electrical Assembly

### Gather Materials

Gather the materials below and get ready to build the Thimble LED Cube!

![Introduction video](https://youtu.be/04uOUsI1jmk)
![thumbnail](assets/images/thumbs/intro.jpg)
This short video introduces the Thimble LED Cube.

#### Parts

Part                |  Qty  | ![](assets/images/parts/all.jpg)
--------------------|-------|-------------------------------------------------
LED Cube Top PCB          |   1   | ![](assets/images/parts/pcb-top.jpg)
LED Cube Main PCB         |   5   | ![](assets/images/parts/pcb-main.jpg)
Straight pin headers      |   1   | ![](assets/images/parts/straight-headers.jpg)
Right angle pin headers   |   1   | ![](assets/images/parts/right-angle-headers.jpg)
8-pin male-female dupont jumper wires  |   1   | ![](assets/images/parts/8-pin-male-female-dupont-jumper.jpg)
8-pin socket (optional - included)   |   1   | ![](assets/images/parts/8-pin-socket.jpg)
6DOF IMU (optional - add'l purchase)    |   1   | ![](assets/images/parts/imu.jpg)

There is an optional part for this kit - an inertial measurement unit that you can purchase from our store. The IMU contains a gyroscope and accelerometer and can be used to make the cube respond to changes in orientation (ie: change colors when you move it).

#### Tools you'll need

Tool                        |
----------------------------|-------------------------------------------------
Soldering Iron              | ![](assets/images/tools/soldering-iron.jpg)
Solder Wire                 | ![](assets/images/tools/solder.jpg)
Flush Diagonal Cutters      | ![](assets/images/tools/flush-cutters.jpg)
Solder Sucker (optional)    | ![](assets/images/tools/solder-sucker.jpg)
Solder Wick (optional)      | ![](assets/images/tools/solder-wick.jpg)
Multimeter (optional)       | ![](assets/images/tools/multimeter.jpg)

### The Schematic

The LED Cube kit consists of two PCBs. The difference between the two is that the top PCB includes additional pin-outs on its pin-headers for an optional 6-degree-of-freedom inertial measurement unit (IMU). The IC for this IMU is the Invensense MPU-6050 and it is used in the GY-521 development board form factor. The MPU6050 contains a MEMS gyroscope and accelerometer in a single chip.

![LED Cube main PCB schematic](assets/images/schematic-main.png)
![LED Cube top PCB schematic](assets/images/schematic-top.png)

Each of the 4x4 matrix PCBs of 16 WS2812Bs can be connected to form the LED cube. As stated in the videos, this is the intended connection diagram for this kit, however, you can connect the individual panels in a different configuration if you would like. The connection diagram below shows how to connect the individual boards to form the cube. The right angle header positions (shown in the diagram) are important as the headers have a "short" and "long" side (noted visually in the diagram) that can make the LED cube difficult to assemble if connected improperly.

![LED Cube PCB connection diagram](assets/images/Connection_Diagram.png)

The diagram below shows a view of the cube looking from the top down and from the bottom up at the LED cube, along with the orientation of the boards around the sides of the cube.

![LED Cube PCB connection diagram 2](assets/images/Connection_Diagram-2.png)

#### Warning
We want to make sure you are familiar with how to solder. If you have not used a soldering iron before or feel uncomfortable using one, watch the video below. Ensure you know proper soldering safety before proceeding.

![How to Use a Soldering Iron](https://youtu.be/D9Vhu7m_XWE)
![thumbnail](assets/images/thumbs/solder-video-thumb.jpg)
A short instructional video to learn how to use a soldering iron safely and
properly.

The PCB comes with all of the [surface mount parts](https://en.wikipedia.org/wiki/Surface-mount_technology)  pre-soldered to the board, so the only parts you need to solder are the through-hole components (headers).

Now we're ready to start soldering! As mentioned before, start by using solder to tack the headers in place (only solder one pin for each header). Grab your soldering iron and solder wire. Place the soldering iron on the top of the pad you intend to solder, also touching the pin header; allow it to heat for a couple of seconds and then slowly push solder wire into the pad and soldering iron tip. Solder should start to flow as you push it (solder should resemble a little dot or joint).

### Assembling the Cube
We've found most people prefer following along in the tutorial step by step, clicking on the videos and images that accompany each video to look at more detail. However, some people prefer to watch the entire assembly process first, which is why we provide the video below of the entire assembly process.

If you'd rather watch each step by step video separately, skip to the unboxing video below.

![Complete Assembly Instructions Video](https://youtu.be/gqFei2Cvz68)
![thumbnail](assets/images/finished-cube.jpg)
This ~25 minute video shows the entire process of assembling the LED Cube.

#### Unbox and layout your tools
The first thing to do is un-box your kit and lay the components out on the table. We'll start by assembling the printed circuit board (PCB).

![LED Cube Unboxing](https://youtu.be/gqFei2Cvz68)
![thumbnail](assets/images/thumbs/unboxing.jpg)
Lay out the components from the kit that we're going to use.


Now that everything is unboxed, it's time to grab your tools and get started!


![Gather your tools](https://youtu.be/WQ_qve3J_IE)
![thumbnail](assets/images/thumbs/tools.jpg)
Gather your tools and get started!


Start with the top PCB, which has "LED CUBE TOP INPUT SIDE" written on it. This board is different than the rest so make sure it's your centerpiece.

![Assembling the top PCB board](https://youtu.be/Kauj4QxEz5s thumbnail=assets/images/thumbs/004.jpg)
![Top PCB board](assets/images/Top-board.png)
![CAREFULLY cut off 8 straight pin headers](assets/images/screenshots/004/cutting-straight-headers.png)
![Tack headers in place](assets/images/screenshots/004/tack-headers.png)
![Finish soldering all other joints and visually inspect board](assets/images/screenshots/004/finish-soldering-other-joints.png)

This next step is optional and only necessary if you are going to purchase and use the IMU sensor.  We're going to solder the female headers on the opposite side of the board so we can add an IMU (Inertial Measurement Unit). As mentioned previously, the 6DOF IMU contains an accelerometer and gyroscope and can be combined to track the orientation of the cube, allowing you to display different patterns according to the cube's orientation.

If you just want to build the cube and do not care about the additional sensor, you can skip this step.

![Optional IMU step 1](https://youtu.be/nnpp2FkeQ9o thumbnail=assets/images/thumbs/005.jpg)
![Tack and solder female headers into place](assets/images/screenshots/005/Solder-IMU.png)
![Solder rest of joints into place](assets/images/screenshots/005/solder-remaining-joints.png)

At this point, you can test the board by connecting the wires according to the schematic.


For this part, only the +, IN, and - pins need to be connected. The + (grey wire) goes to 5V on the UNO, the IN (purple wire) goes to pin 6 on the UNO, and the - (blue wire) goes to GND on the UNO.

![LED Cube 006 Testing Main Board](https://youtu.be/-bD7YOHv9Zo)
![Connect jumper wires to board](assets/images/screenshots/006/test-main-wires.png)
![Connect three wires (grey, purple, blue) to the UNO board. Blue wire connects to Ground; Purple wire connects to pin 6; Grey wire connects to 5V](assets/images/screenshots/006/three-wires-to-UNO.png)
![Connect USB cable from the top PCB board to UNO board. Then upload the code displayed below.](assets/images/screenshots/006/light-up-like-this.png)

TODO: Add a link to github code
```C++
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Example test code (Based on Examples > Adafruit NeoPixel > strandtest.ino)

#define PIN 6

Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  // Some example procedures showing how to display to the pixels:
  colorWipe(strip.Color(255, 0, 0), 50); // Red
  colorWipe(strip.Color(0, 255, 0), 50); // Green
  colorWipe(strip.Color(0, 0, 255), 50); // Blue
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}
```

#### Warning
The above test serves as the first troubleshooting checkpoint. If your board is not lighting up, please proceed to the troubleshooting section. If you are still having trouble, please post on the forums.

Before we solder everything in place, we're going to cut our right angle headers in sections of 3. Please be careful as these headers are fragile and the amount included in the kit is close to exactly what you need. If you run out, we can send you replacements via our online store. Make sure your wire cutters are perfectly in line so it's a clean cut. Also, hold the headers down with one finger so they don't fly off when you cut them. Don't rush this step. Take your time.


![LED Cube 007 Cut Right Angle Headers](https://youtu.be/QVNbL2iV1zY)
![CAREFULLY cut right angle headers in sections of 3](assets/images/screenshots/007/cut-in-sections-of-3.png)

If you look at any of the 5 identical PCB boards, you'll notice the word "IN" on the left and top sides of the board, and "OUT" on the right and bottom sides of the board. This is how the data travels through the boards once we've connected everything together. We've provided a diagram for you below; follow instructions on there so you can see how everything gets connected together.

![LED Cube 008 Connection diagram](https://youtu.be/4lTIxfnw9uE)
![Internal Connection Diagram](assets/images/PCB_internal_connections.png)
![Connection Diagram between the boards](assets/images/Connection_Diagram.png)
![Connection Diagram between the boards 2](assets/images/Connection_Diagram-2.png)

We'll now solder right angle headers to the top PCB board. If you're having a hard time soldering your first header onto your board, you can use masking tape or Kapton tape to hold the headers into place.

![Assembling the top PCB - board 1](https://youtu.be/47e2QMe0afw)
![Place long side of right angle header through the back of the board](assets/images/screenshots/009/right-angle-through-back.png)
![Place tape on back of board to hold headers in place if you're having trouble.](assets/images/screenshots/009/add-tape.png)
![Solder remaining headers in place](assets/images/screenshots/009/remaining-headers.png)

Before you get too far with building the LED Cube, feel free to number each board and label them on the back. In the video, we affixed a piece of masking tape to the back of each board and wrote its number with a marker. 1 is the main board and 6 is the bottom board. This will help you as you build out the cube. Now that board 1 is done, we'll start with board 6, the bottom.

![Cube assembly - Label Boards, Assemble Board 1 and Board 6](https://youtu.be/tIAWtbL_Wjs)
![Connection Diagram between the boards](assets/images/Connection_Diagram.png)
![Place three right angle headers through the back of board 6 and place the board flat on table.](assets/images/screenshots/010/flat.png)
![Tack a joint on each header and then solder all three headers into place.](assets/images/screenshots/010/solder-all-three.png)

Now we will work on board 3 and board 5. Tack the headers to board 3 according to the connection diagram above. Then, once they are at a right angle to the board, solder them in place. Do the same with board 5.

![Board 3 and Board 5](https://youtu.be/ap47fxOJeOI)
![This is how the headers will be attached to board 3.](assets/images/screenshots/011/board-3.png)
![Tack a joint on each header and then solder all headers onto board 3.](assets/images/screenshots/011/into-place.png)
![Here is the layout of headers for board 5; tack a joint on each header then solder all headers into place.](assets/images/screenshots/011/board-5.png)

Now that you have all the headers on the boards. You will solder board 1 onto board 2. Make sure to follow the connection diagram. Additionally, make sure to only tack boards 1 and 2 together, adjust the boards so they are at a right angle to each other, and then finish soldering the header in place.

![Solder Board 1 to Board 2](https://youtu.be/32jnihkrPwg)
![Connect board 1 onto board 2; tack a joint on each header to secure them in place and then finish soldering each header onto the board.](assets/images/screenshots/012/angle.png)
![To keep boards 90 degrees to each other, use your fingers to keep the boards steady. This can take some time.](assets/images/screenshots/012/finger.png)

Now that you have board 1 and 2 together, feel free to test the boards like we did earlier. If you're interested in the optional accelerometer, you can purchase it on our store. Keep in mind, however, it cannot be inserted once you've completed building the LED cube.

![Optional IMU step 2](https://youtu.be/DS1tuOwYMIo)
![Tack a joint to the board, visually inspect, and solder the rest of header onto the IMU](assets/images/screenshots/013/IMU.png)
![Plug IMU into LED cube](assets/images/screenshots/013/plug-IMU.png)
![Once IMU is secure, test it by putting SCL and SDA wires on the LED cube into SCL and SDA slots on the UNO board. INT wire will go into pin 2 on the Uno board](assets/images/screenshots/013/SEL-SDA.png)

The following code is meant to test the IMU. If you do not wish to use the IMU, this code will not work. Instead, modify the strandtest code to test 32 LEDs, rather than just 16.

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

#### Warning
The above test serves as the second troubleshooting checkpoint. If your board is not lighting up and responding to the IMU, please first doublecheck that your IMU is connected and then proceed to the troubleshooting section. If you do not have an IMU, one is available for purchase. This item is not included in the kit as it is an optional component and not necessary for the LED cube to function. If you are still having trouble, please post on the forums.

Now it's time to piece all the boards together and finish building the LED cube. This may take some patience; especially with board 4. :)

We have found it is easiest to lay out all of the boards and connect them without solder until you have the cube fully assembled in your hands. Follow the connection diagram for assistance. Start by connecting board 3 to board 2, place board 5 in position, the board 6, and finally, place board 4. Now, tack board 4 into place and tack all of the remaining joints in place to complete assembly of the cube. Attach the jumper cables to the top PCB board, program the board, and watch it work. Continue to the next section for troubleshooting tips followed by code examples, discussion, and additional challenges.

![LED Cube 014 Complete LED Cube](https://youtu.be/jQ-WSJOEZwQ)
![Place board 3 onto board 2](assets/images/screenshots/014/3-on-2.png)
![Place board 5](assets/images/screenshots/014/place-5.png)
![Place board 6](assets/images/screenshots/014/place-6.png)
![Place board 4](assets/images/screenshots/014/that-in.png)
![Tack a joint on each header and then solder all boards around the board securely](assets/images/screenshots/014/solder-securely.png)
![Attach jumper cable to Top PCB board](assets/images/screenshots/014/add-jumpers.png)
