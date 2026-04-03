#include <stdio.h>

int main(int argc, const char *argv[])
{
  char text[] = "Hello!";

  /* things ptr pointing to can change 
  *  - but the things that are being pointed to are treated as constant.
  */
  char const *ptext1 = text;
  // ptext[5] = '?';
  ptext1++;

  /* Can't change things ptr is pointing to
  *  - but thing being pointed to is not constant.
  */
  char * const ptext2 = text; // ptr constant
  ptext2[5] = '?';
  // ptext2++;

  printf("%s\n", ptext1);
  printf("%s\n", ptext2);

  return 0;
}
