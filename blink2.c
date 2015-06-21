#include <stdint.h>
int main(void) {
 int delay;

 while(1) {


  for(delay = 0; delay < 32000; delay++) ;

     PORTB = PORTB ^ (1 << 5);

 }
}

