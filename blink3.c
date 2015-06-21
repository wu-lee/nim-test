#include <stdint.h>

int main(void) {
  unsigned int delay;

 (*(volatile uint8_t *)((0x04) + 0x20)) |= (1 << (5));

 while(1) {
     
     (*(volatile uint8_t *)((0x05) + 0x20)) = 255;
     
     for(delay = 0; delay < 65000; delay++) {}
     
     
     //(*(volatile uint8_t *)((0x05) + 0x20)) = 0;
     //for(delay = 0; delay < 40000; delay++) {}
     (*(volatile uint8_t *)((0x05) + 0x20)) = 0;
 }
}

