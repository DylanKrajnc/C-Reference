#include <stdio.h>

int main(int argc, const char *argv[])
{
  int value = 123;
  int *p1 = &value;
  /* In C, a void ptr can easily be converted to any other type
  *  of ptr, and vice versa.
  */
  void *void_ptr = p1;
  int *p2 = void_ptr;

  printf("%d\n", *p2);
  return 0;
}