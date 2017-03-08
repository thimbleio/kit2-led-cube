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
