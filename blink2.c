#include <stdint.h>
#define PORTB (*(volatile uint8_t*)(0x05 + 0x20))
int main(void) {
    int delay;
    
    while(1) {
	
	
	for(delay = 0; delay < 32000; delay++) ;
	
	PORTB = PORTB ^ (1 << 5);
	
    }
}

