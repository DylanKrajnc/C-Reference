#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char *argv[])
{
  const int bytes = 1024;

  /* malloc returns a void pointer
  *  explicitly casting void pointer to char type
  * - not necessary in C, implicitly cast to correct type
  */
  char *pmem = (char *)malloc(bytes);

  // malloc might fail - for example if memory asked for is too large and not available
  if (pmem == NULL)
  {
    // can use return 0 since in main function
    exit(0);
  }

  for (int i = 0; i < bytes; ++i)
  {
    pmem[i] = 'a';
  }

  pmem[bytes-1] = 0;
  printf("%s\n", pmem);

  free(pmem);

  return 0;
}
