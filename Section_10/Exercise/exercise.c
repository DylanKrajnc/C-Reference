#include "exercise.h"

uint32_t colour_to_int(char r, char g, char b)
{
  uint32_t result = 0x00000000;

  result |= r;
  result <<= 8;
  result |= g;
  result <<= 8;
  result |= b;

  return result;
}

void int_to_color(uint32_t val, char *r, char *g, char *b)
{ 
  *b = (char)(val & 0x000000FF);
  *g = (char)((val & 0x0000FF00) >> 8);
  *r = (char)((val & 0x00FF0000) >> 16);
}
