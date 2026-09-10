#include <stdio.h>

#define PRINT(...) printf(__VA_ARGS__);

int main(int argc, const char *argv[])
{
  PRINT("%s: %d\n", "value", 7)

  return 0;
}
