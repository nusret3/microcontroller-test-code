#include "c87.h"
#include "Lc87f1m.sfr"

void main()
{
   _P0DDR = 0xFF;
   _OCR = 0x90; // enable main clock and divide-by-1
   while(1) {
    _P0 ^= 1;
   }	
}