#include <stdio.h>

int main(int argc, const char *argv[])
{
  /* word1 == word2
  *  "" creates a char array
  *  0 is the null terminator - tells C where the string ends
  */
  // char word1[] = {'h', 'i', 0};
  // char word2[] = "hi";

  char text[] = "abcdefghijklmnopqrstuvwxyz";
  printf("%s\n", text);

  char *ptext = text;
  printf("%c\n", *ptext);

  printf("%c\n", *(ptext + 25)); // points 25 bytes ahead in mem (char is 1 byte)
  ptext += 26; // can't do this to an array - which is type of const ptr
  printf("%d\n", *ptext);
  ptext -= 26;

  printf("%s\n", ptext + 5);
  printf("%c\n", ptext[4]); // 4 bytes further on from where ptr originally points to

  return 0;
}
