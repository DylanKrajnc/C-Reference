#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

int main(int argc, const char *argv[])
{
  const int NPIXELS = 1280 * 720;
  int nbytes = NPIXELS * sizeof(pixel_t);

  printf("float size: %lu bytes\n", sizeof(float));
  /* Might think that the struct would need 9 bytes, but infact
  *  C aligns bytes for efficiency, and in this case 12 are needed.
  */
  printf("pixel_t size: %lu bytes\n", sizeof(pixel_t));
  printf("need %d bytes\n", nbytes);

  pixel_t * const pixels = (pixel_t *)malloc(nbytes);

  if(!pixels)
  {
    printf("Allocation Failed!");
    return 1;
  }

  free(pixels);
  return 0;
}
