#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
  char buffer[10];

  /* Converts int to string, with specified base -
  *  in this case, base 10
  */
  // itoa(255, buffer, 10); // Non-Standard
  sprintf(buffer, "%d", 255);

  puts(buffer);

  /* Undefined behaviour if trying to convert something
  *  that can't be converted to a number with the funcs below.
  */
  printf("%d\n", atoi(buffer));
  printf("%f\n", atof(buffer));

  return 0;
}
