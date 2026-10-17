#include "ch32fun.h"
#include <stdio.h>

// use defines to make more meaningful names for our GPIO pins
#define PIN_LED PC4

int main()
{
	SystemInit();

	funGpioInitAll(); // Enable GPIOs
	
	funPinMode( PIN_LED,   GPIO_Speed_50MHz | GPIO_CNF_OUT_PP ); // Set PIN_LED to output

	while(1) {
		funDigitalWrite( PIN_LED,   FUN_HIGH ); // Turn on PIN_LED
		Delay_Ms( 333 );
		funDigitalWrite( PIN_LED,   FUN_LOW );  // Turn off PIN_LED
		Delay_Ms( 333 );
	}
}
