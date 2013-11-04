#include <msp430.h> 

/*
 * Created By: Travis Schriner
 * Date 3 November 2013
 * Description:
 *	This code creates a game using
 *	the MSP430 microcontroller
 *	as well as the LCD display located
 *	on the geek box. It is the best
 *	game since PONG ;)
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	return 0;
}
