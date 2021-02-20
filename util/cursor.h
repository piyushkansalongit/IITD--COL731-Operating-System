#pragma once
#include "util/io.h"
#include "util/config.h"

#define FB_COMMAND_PORT         (io_t)0x3D4
#define FB_DATA_PORT            (io_t)0x3D5

using namespace io;

namespace cursor
{
    void enable_cursor(uint8_t cursor_start, uint8_t cursor_end)
    {
        write8(FB_COMMAND_PORT, (uint16_t)0, 0x0A);
        uint8_t enable_high_byte = read8(FB_DATA_PORT, (uint16_t)0);
        write8(FB_DATA_PORT, (uint16_t)0, enable_high_byte & 0xC0 | cursor_start);
    
        write8(FB_COMMAND_PORT, (uint16_t)0, 0x0B);
        uint8_t enable_low_byte = read8(FB_DATA_PORT, (uint16_t)0);
        write8(FB_DATA_PORT, (uint16_t)0, enable_low_byte & 0xE0 | cursor_end);
    }

    void disable_cursor()
    {
        write8(FB_COMMAND_PORT, (uint16_t)0, 0x0A);
        write8(FB_DATA_PORT, (uint16_t)0, 0x20);
    }

    
    void update_cursor(int x, int y, int VGA_WIDTH)
    {
        uint16_t pos = y * VGA_WIDTH + x;
        write8(FB_COMMAND_PORT,(uint16_t)0, 0x0F);
        write8(FB_DATA_PORT,(uint16_t)0, (uint8_t)(pos & 0xFF));
        write8(FB_COMMAND_PORT,(uint16_t)0, 0x0E);
        write8(FB_DATA_PORT,(uint16_t)0, (uint8_t) ((pos >> 8) & 0xFF));
    }
}