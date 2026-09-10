#include <stdio.h>

// turn macros params into a string by prefixing with a #
#define DEBUG(X) fprintf(stderr, "%s\n", #X);

int main(int argc, const char *argv[])
{
  DEBUG(some error message)

  return 0;
}
