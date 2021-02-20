#pragma once

#include "util/io.h"

namespace serial{

  static inline bool is_transmitter_ready(io_t baseport){
    //insert your code here
    uint8_t line_status = io::read8(baseport, (uint16_t)5);
    if((line_status & ((uint8_t)1)<<5) != 0)
      return true;
    else return false;
  }

  static inline void writechar(uint8_t c, io_t baseport){
    //insert your code here
    io::write8(baseport, (uint16_t)0, c);
  }

} //end serial
