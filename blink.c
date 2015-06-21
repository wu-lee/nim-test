#define F_CPU 16000000L
#include <avr/io.h>
//#include <util/delay.h>


enum {
 BLINK_DELAY_MS = 1000,
};

int main (void)
{
  int delay;
 /* set pin 5 of PORTB for output*/
 DDRB |= _BV(DDB5);

 while(1) {
  /* set pin 5 high to turn led on */
     //PORTB = 0xff;

     for(delay = 0; delay < 32000; delay++) ;

  /* set pin 5 low to turn led off */
     PORTB = PORTB ^ (1 << 5);

     //for(delay = 0; delay < 100000; delay++) { PORTB &= 1 << 5; }
 }

 return 0;
}
