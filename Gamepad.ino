#include <Joystick.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        7 // On Trinket or Gemma, suggest changing this to 1
#define PIN_L        8 // On Trinket or Gemma, suggest changing this to 1
// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 15 // Popular NeoPixel ring size
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_L(NUMPIXELS, PIN_L, NEO_GRB + NEO_KHZ800);

Joystick_ Joystick;

int RxAxis_ = 0;
int RyAxis_ = 0;
int XAxis_ = 0;
int YAxis_ = 0;

const bool initAutoSendState = true;

void setup() {

  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
  #endif
  
  pinMode(9,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(3,INPUT_PULLUP);
  pinMode(2,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
  pinMode(13,INPUT_PULLUP);
  pinMode(1,INPUT_PULLUP);
  pinMode(0,INPUT_PULLUP);
  Joystick.begin();
  Serial.begin(9600);

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.show();            // Turn OFF all pixels ASAP
  pixels.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
  
}
void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<pixels.numPixels(); i++) { 
    pixels.setPixelColor(i, color);        
    pixels.show();                       
    delay(wait);                          
  }
}

void colorWipe_L(uint32_t color_L, int wait_L) {
  for(int i=0; i<pixels_L.numPixels(); i++) {
    pixels_L.setPixelColor(i, color_L);       
    pixels_L.show();                     
    delay(wait_L);                           
  }
}


void rainbowFade2White(int wait) {
  int fadeVal=0, fadeMax=100;

  for(uint32_t firstPixelHue = 0; firstPixelHue < 65536;
    firstPixelHue += 256) {

    for(int i=0; i<pixels.numPixels(); i++) {

     
      uint32_t pixelHue = firstPixelHue + (i * 65536L / pixels.numPixels());

    
      pixels.setPixelColor(i, pixels.gamma32(pixels.ColorHSV(pixelHue, 255,
        255 * fadeVal / fadeMax)));
    }

    pixels.show();
    delay(wait);

    if(firstPixelHue < 65536) {                              
      if(fadeVal < fadeMax) fadeVal++;                      
    } else if(firstPixelHue >= 65536) {
      if(fadeVal > 0) fadeVal--;                           
    } else {
      fadeVal = fadeMax; 
    }
  }


  delay(50);
}
void loop() {
   
  

  
  RxAxis_ = analogRead(A2);
  RxAxis_ = map(RxAxis_,0,1023,1000,0);
  Joystick.setRxAxis(RxAxis_);
  //Serial.print(RxAxis_);
  //Serial.print("\n");

  RyAxis_ = analogRead(A3);
  RyAxis_ = map(RyAxis_,0,1023,1000,0);
  Joystick.setRyAxis(RyAxis_);
  //Serial.print(RyAxis_);
  //Serial.print("\n");

  XAxis_ = analogRead(A0);
  XAxis_ = map(XAxis_,0,1023,1000,0);
  Joystick.setXAxis(XAxis_);  
 // Serial.print(XAxis_);
 // Serial.print("\n");

  YAxis_ = analogRead(A1);
  YAxis_ = map(YAxis_,0,1023,1000,0);
  Joystick.setYAxis(YAxis_); 
 // Serial.print(YAxis_);
  //Serial.print("\n");

  if(RxAxis_ > 550){
     colorWipe(pixels.Color(  0,   0, 255) , 5);
     
  }
  else if(RxAxis_ < 450){
    colorWipe(pixels.Color(  255,   255, 0) , 5);
  }
  else
  {
    colorWipe(pixels.Color(  0,   0,   0), 0);
  }

   if(RyAxis_ > 550){
     colorWipe(pixels.Color(  255,   0, 255) , 5);
  }
  else if(RyAxis_ < 450){
 
    rainbowFade2White(0);
  }
  else
  {
    colorWipe(pixels.Color(  0,   0,   0), 0);
  }

//==========================
  if(XAxis_ > 550){
     colorWipe_L(pixels_L.Color(  0,   0, 255) , 5);
     
  }
  else if(XAxis_ < 450){
    colorWipe_L(pixels_L.Color(  255,   255, 0) , 5);
  }
  else
  {
    colorWipe_L(pixels_L.Color(  0,   0,   0), 0);
  }

   if(YAxis_ > 550){
     colorWipe_L(pixels_L.Color(  255,   0, 255) , 5);
  }
  else if(YAxis_ < 450){
   colorWipe_L(pixels_L.Color(  0,   255, 255) , 5);

  }
  else
  {
    colorWipe_L(pixels_L.Color(  0,   0,   0), 0);
  }

  if(digitalRead(3) == LOW)
  {Joystick.pressButton(6);}
  else
  {Joystick.releaseButton(6);}
  
  if(digitalRead(4) == LOW)
  {Joystick.pressButton(1);}
  else
  {Joystick.releaseButton(1);}

  if(digitalRead(5) == LOW)
  {Joystick.pressButton(2);}
  else
  {Joystick.releaseButton(2);}

  if(digitalRead(6) == LOW)
  {Joystick.pressButton(3);}
  else
  {Joystick.releaseButton(3);}


  if(digitalRead(9) == LOW)
  {Joystick.pressButton(0);}
  else
  {Joystick.releaseButton(0);}

  if(digitalRead(10) == LOW)
  {Joystick.pressButton(7);}
  else
  {Joystick.releaseButton(7);}

    if(digitalRead(11) == LOW)
  {Joystick.pressButton(8);}
  else
  {Joystick.releaseButton(8);}

   if(digitalRead(12) == LOW)
  {Joystick.pressButton(9);}
  else
  {Joystick.releaseButton(9);}

  if(digitalRead(2) == LOW)
  {Joystick.pressButton(10);}
  else
  {Joystick.releaseButton(10);}
  
   if(digitalRead(13) == LOW)
  {Joystick.pressButton(11);}
  else
  {Joystick.releaseButton(11);}

  if(digitalRead(1) == LOW)
  {Joystick.pressButton(12);}
  else
  {Joystick.releaseButton(12);}

  if(digitalRead(0) == LOW)
  {Joystick.pressButton(13);}
  else
  {Joystick.releaseButton(13);}

  delay(10);
  
}
