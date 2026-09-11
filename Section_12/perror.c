#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, const char *argv[])
{
  perror("Some error message");

  FILE *fp = fopen("invalid.txt", "r");
  perror("Cannot open file");

  printf("%d\n", errno);

  return 0;
}
