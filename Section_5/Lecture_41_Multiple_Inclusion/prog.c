#include <stdio.h> // <> C compiler searches standard include path
#include "funcs.h" // "" first searches the current directory (abs or relative path)
#include "funcs.h" // Not representive of normal code, however done to emulate a situation where nested includes might lead to a header file being included somewhere twice 

int main(int charc, const char *argv[])
{
  greet();

  return 0;
}
