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
