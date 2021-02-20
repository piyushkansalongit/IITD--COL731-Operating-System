#pragma once

#include "generated/lpc_kbd.dev.h"

namespace lpc_kbd{

  static inline bool has_key(lpc_kbd_t& dev){

    //insert your code here
    lpc_kbd_status_t status_register = lpc_kbd_status_rd(&dev);
    uint8_t status_register_obf_field = lpc_kbd_status_obf_extract(status_register);
    if(status_register_obf_field!=0)
      return true;
    return false;
  }

  static inline uint8_t get_key(lpc_kbd_t& dev){

    //insert your code here
    uint8_t input_key = lpc_kbd_input_rd(&dev);
    return input_key;
  }

}// namespace lpc_kbd

