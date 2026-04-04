#include <stdio.h>

int main(int argc, const char *argv[]) {

  char text[] = "Hello!";
  const char *ptext1 = text;
  printf("%s\n", ptext1);

  // Convention to put _t or put in all caps
  typedef const char *textptr_t; //declaring a type
  textptr_t ptext2 = text;
  printf("%s\n", ptext2);

  typedef struct Value {
    int id;
  } value_t;

  // or...
  typedef struct Value vtype_t;

  value_t v1 = {7};
  printf("%d\n", v1.id);

  return 0;
}
