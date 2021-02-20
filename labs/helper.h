#pragma once

#include "labs/vgatext.h"
#include "labs/shell.h"
using namespace vgatext;


namespace helper
{
static char scankey_to_char(uint8_t scankey)
{
  char mapping[] = {
      0,
      27, 49, 50, 51, 52, 53, 54, 55, 56, 57, 48, 45, 61, 8,
      9, 113, 119, 101, 114, 116, 121, 117, 105, 111, 112, 91, 93, 10,
      0, 97, 115, 100, 102, 103, 104, 106, 107, 108, 59, 39, 0, 0,
      0, 122, 120, 99, 118, 98, 110, 109, 44, 46, 47};
  return mapping[scankey];
}

static void writecharxy(int x, int y, uint8_t c, uint8_t bg, uint8_t fg, int w, int h, addr_t vgatext_base)
{
    writechar(y * w + x, c, bg, fg, vgatext_base);
}

static void fillrect(int x0, int y0, int x1, int y1, uint8_t bg, uint8_t fg, int w, int h, addr_t vgatext_base)
{
    for (int y = y0; y < y1; y++)
    {
        for (int x = x0; x < x1; x++)
        {
            writecharxy(x, y, 0, bg, fg, w, h, vgatext_base);
        }
    }
}

static void drawrect(int x0, int y0, int x1, int y1, uint8_t bg, uint8_t fg, int w, int h, addr_t vgatext_base)
{

    writecharxy(x0, y0, 0xc9, bg, fg, w, h, vgatext_base);
    writecharxy(x1 - 1, y0, 0xbb, bg, fg, w, h, vgatext_base);
    writecharxy(x0, y1 - 1, 0xc8, bg, fg, w, h, vgatext_base);
    writecharxy(x1 - 1, y1 - 1, 0xbc, bg, fg, w, h, vgatext_base);

    for (int x = x0 + 1; x + 1 < x1; x++)
    {
        writecharxy(x, y0, 0xcd, bg, fg, w, h, vgatext_base);
    }

    for (int x = x0 + 1; x + 1 < x1; x++)
    {
        writecharxy(x, y1 - 1, 0xcd, bg, fg, w, h, vgatext_base);
    }

    for (int y = y0 + 1; y + 1 < y1; y++)
    {
        writecharxy(x0, y, 0xba, bg, fg, w, h, vgatext_base);
    }

    for (int y = y0 + 1; y + 1 < y1; y++)
    {
        writecharxy(x1 - 1, y, 0xba, bg, fg, w, h, vgatext_base);
    }
}

static void drawtext(int x, int y, const char *str, int maxw, uint8_t bg, uint8_t fg, int w, int h, addr_t vgatext_base)
{
    for (int i = 0; i < maxw; i++)
    {
        if (str[i] == 0)
        {
            break;
        }
        writecharxy(x + i, y, str[i], bg, fg, w, h, vgatext_base);
    }
}

static void display_menu_item(const renderstate_t &state, int i, uint8_t bg, int w, int h, addr_t vgatext_base)
{
    const char *temp = state.menu_items[i];
    writecharxy(30, 1 + 2 * i, 0xaf, 0x0, 0x7, w, h, vgatext_base);
    drawtext(31, 1 + 2 * i, temp, state.max_width_of_menu_items, bg, (uint8_t)0x7, w, h, vgatext_base);
}

static void drawnumberinhex(int x, int y, uint32_t number, int maxw, uint8_t bg, uint8_t fg, int w, int h, addr_t vgatext_base)
{
    enum
    {
        max = sizeof(uint32_t) * 2 + 1
    };
    char a[max];
    for (int i = 0; i < max - 1; i++)
    {
        a[max - 1 - i - 1] = hex2char(number % 16);
        number = number / 16;
    }
    a[max - 1] = '\0';

    drawtext(x, y, a, maxw, bg, fg, w, h, vgatext_base);
}
} // namespace helper