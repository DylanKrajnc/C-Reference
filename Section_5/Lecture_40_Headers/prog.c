#include <stdio.h> // <> C compiler searches standard include path
#include "funcs.h" // "" first searches the current directory (abs or relative path)

int main(int charc, const char *argv[])
{
  greet();

  return 0;
}
