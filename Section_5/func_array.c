#include <stdio.h>

/*Once you pass an array to a func, you can no longer obtain
* the number of elements in the array.
* When you pass an array to a func, the array decays to a pointer.
* const keyword added to prevent accidental altering of numbers array.
* An array can't be returned by a function.
*/
int sum(const int values[], int size)
{
  int result = 0;

  for(int i = 0; i < size; ++i)
  {
    result += values[i];
  }

  return result;
}

int main(int argc, const char *argv[])
{
  int numbers[] = { 10, 20 ,30 };
  //numbers passed by reference
  int result = sum(numbers, sizeof(numbers)/sizeof(int));
  printf("Result: %d\n", result);

  return 0;
}