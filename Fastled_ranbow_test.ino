// testing fastled lib color cycle
// very simple program that cycles all LED's though a rainbow
// at the same time
// modifed to control 5 layered  LED cube
// with each layer on separate pin

#include "FastLED.h"

#define LED_PER_LAYER 25 
#define TOTAL_LEDS 125

CRGB leds[TOTAL_LEDS];


void setup() 
{ 
	// Need to set up all 5 layers each layer to a diff pin on the ESP8266
	FastLED.addLeds<NEOPIXEL, 7>(leds, 0, LED_PER_LAYER);
	FastLED.addLeds<NEOPIXEL, 1>(leds, LED_PER_LAYER, LED_PER_LAYER);
	FastLED.addLeds<NEOPIXEL, 6>(leds, 2 * LED_PER_LAYER, LED_PER_LAYER);
	FastLED.addLeds<NEOPIXEL, 2>(leds, 3 * LED_PER_LAYER, LED_PER_LAYER);
	FastLED.addLeds<NEOPIXEL, 5>(leds, 4 * LED_PER_LAYER, LED_PER_LAYER);
}
void loop() 
{
	static uint8_t hue = 0;
	FastLED.showColor(CHSV(hue++, 255, 255));
	delay(10);
}
