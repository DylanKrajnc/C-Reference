#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  char text[] = "The fence is not made of sausages.";
  
  char *s = text;
  char *e = text + (sizeof(text)-2);

  for (int i = 0; i < (sizeof(text)/2); i++)
  {
    char temp = *s;
    *s = *e;
    *e = temp;

    s = s + 1;
    e = e - 1;
  }
  
  printf("text: %s\n", text);

  return 0;
}
