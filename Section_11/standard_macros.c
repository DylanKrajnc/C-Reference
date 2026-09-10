#include <stdio.h>

int main(int argc, const char *argv[])
{
  /*There are many predefined macros in C (as well as compiler specific)
  * Below is an example of two such macros
  */
  printf("file %s, line %d\n", __FILE__, __LINE__);

  return 0;
}