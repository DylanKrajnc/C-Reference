#include "macro_parameters.h"
#include <stdio.h>

int main(int argc, const char *argv[])
{
  int value1 = 1;
  int value2 = 2;

  printf("%d,%d\n", value1, value2);
  /*this macro is expanded to literal code that is pasted into the program
  * hence there is no need to pass the address of the variables containing the values
  */
  SWAP_INT(value1, value2)
  printf("%d,%d\n", value1, value2);
  return 0;
}
