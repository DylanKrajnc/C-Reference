#include <stdio.h>

#define VAR(var, n) var ## n

int main(int argc, const char *argv[])
{
  int val1 = 7;
  printf("%d\n", VAR(val, 1));

  return 0;
}
