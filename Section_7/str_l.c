#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  // char text[] = "hello";
  char text[50] = "hello";

  printf("sizeof: %d\n", (int)sizeof(text)); // 6 or 50
  printf("strlen: %d\n", (int)strlen(text));

  return 0;
}
