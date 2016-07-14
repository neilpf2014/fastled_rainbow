// testing fastled lib color cycle
// also testing to see if this goes to git
// test 2
//  test 2
// test 3

#include "FastLED.h"
CRGB leds[27];
uint32_t pastMills = 0;
void setup() 
{ 
	FastLED.addLeds<NEOPIXEL, 6>(leds, 60); 

}
void loop() 
{
	static uint8_t hue = 0;
	FastLED.showColor(CHSV(hue++, 255, 255));
	delay(10);
}
