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
