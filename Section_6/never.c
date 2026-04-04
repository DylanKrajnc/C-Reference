#include <stdio.h>

int *get_value()
{
  int value = 7;
  return &value; // Never do this! Value is out of scope.
}

char *get_array()
{
  char text[] = "Hello!";
  return text; // Never do this! Text is out of scope.
}

// Never return address of local vars from funcs

int main(int argc, const char *argv[])
{
  int *pi = get_value();
  printf("%d\n", *pi);

  char *ptext = get_array();
  printf("%s\n", ptext);

  return 0;
}
