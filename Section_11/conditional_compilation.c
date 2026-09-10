#include <stdio.h>

// #define TEST

int main(int argc, const char *argv[])
{
  #ifdef TEST
  printf("test\n");
  #elif DEV
  printf("dev\n");
  #else
  printf("prod\n");
  #endif

  return 0;
}
