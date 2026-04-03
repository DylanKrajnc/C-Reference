#include <stdio.h>

// can add const in arg list to prevent item from being modified, only viewed
void modify_int(int *px)
{
  (*px)++;
}

int main(int argc, const char *argv[])
{
  
  int x = 0;
  modify_int(&x);
  printf("x: %d\n", x); 
}
