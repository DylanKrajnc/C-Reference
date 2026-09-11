#include <assert.h>

/*Assertions have a performance impact on the program
* but can be turned off using -DNDEBUG
*/
int main(int argc, const char *argv[])
{
  int value = 3;

  assert(value == 2);
}
