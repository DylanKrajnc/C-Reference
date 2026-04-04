#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  char text[20] = "";
  char text1[] = "good";
  char text2[] = "morning";

  strcat(text, text1);
  strcat(text, " ");
  strcat(text, text2);

  printf("%s\n", text);

  return 0;
}
