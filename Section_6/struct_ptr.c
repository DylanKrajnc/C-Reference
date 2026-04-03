#include <stdio.h>

int main(int argc, const char *argv[])
{
  /* Pointers useful here as the struct doesn't need to be copied
  *  to a function, but simply have it's pointer passed.
  *  (Not shown in this file)
  */

  struct Item
  {
    int id;
    int count;
  } item1;

  struct Item *pitem = &item1;

  /* Doesn't work as the . operator has higher precedence than
  *  the * operator.
  */
  // *pitem.id = 123;
  (*pitem).id = 123;
  pitem->count = 456;

  printf("item1: %d, %d\n", item1.id, item1.count);

  return 0;
}
