#include "exercise.h"

int main(int argc, const char *argv[])
{
  char a = 0x00;
  char b = 0x00;
  char c = 0x00;

  uint32_t cti_result = colour_to_int('x', 'y', 'z');
  printf("%08x\n", cti_result);

  int_to_color(cti_result, &a, &b, &c);

  printf("r: %c\n", a);
  printf("g: %c\n", b);
  printf("b: %c\n", c);

  return 0;
}
