#include <stdio.h>

int main(int argc, const char *argv[])
{
  int values[] = {0, 2, 4, 5, 6, 8};

  /* Pointer is a type of long byte, as it stores address.
  *  When passing array to function, unable to know size of array.
  *  The name of an array, is basically a pointer to that array.
  */
  int *pvalues = values;

  // gives size of 8 bytes
  printf("size of pvalues: %lu\n", sizeof(pvalues));

  for (int i = 0; i < sizeof(values)/sizeof(int); i++)
  {
    printf("%d ", *pvalues);
    /* Can use inc/dec operators with pointers.
    *  Points to int in arr, and if inc, points to next int in arr.
    */ 
    ++pvalues; // at end of loop - points to memory address after the last element of array 
  }

  printf("\n%lu\n", pvalues - values); // ptr arithmetic; points to size of the array

  return 0;
}
