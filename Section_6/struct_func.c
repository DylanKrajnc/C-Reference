#include <stdio.h>

struct Item
{
  int id;
  int count;
};

// can add const in arg list to prevent item from being modified, only viewed
void modify_item(struct Item *pitem)
{
  pitem->id = 123;
  pitem->count = 456;
}

int main(int argc, const char *argv[])
{
  struct Item item;
  // no inefficient copying of entire struct
  modify_item(&item);
  printf("item: %d, %d\n", item.id, item.count); 
}
