#include "util/io.h"

namespace vgatext{

   static inline void writechar(int loc, uint8_t c, uint8_t bg, uint8_t fg, addr_t base){
     //your code goes here
     
     // using mmio::write8
    //  uint32_t index = ((uint32_t)(loc))<<1;
    //  mmio::write8(base, index, c);
    //  mmio::write8(base, index+1, bg<<4 | fg);

     // using mmio::write16
     uint32_t index = ((uint32_t)(loc))<<1;
     mmio::write16(base, index, (uint16_t)bg << 12 | (uint16_t)fg<<8 | c);
   }

}//namespace vgatext
