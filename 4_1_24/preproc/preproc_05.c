#include <stdio.h>
#include <stdlib.h>

#define SUMA(i, j) i+j /* mezi suma a (i, nesm� b�t mezera */

int main(void)
{
  int soucet;
  
  soucet = SUMA(10, 20);
  printf("soucet je %d\n", soucet);

  return 0;
}
