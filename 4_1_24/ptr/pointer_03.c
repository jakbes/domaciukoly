#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p, q;
  q = 220;   /* p�i�ad� q hodnotu 220 */
  p = &q;    /* p�i�ad� p adresu q */
  
  printf("%d\n", p);    /* zobraz� adresu, na kterou p ukazuje */
  printf("%d\n", *p);
  *p++;                /* (*p)++; */
  printf("%d\n", *p);  /* zobraz� q pomoc� ukazatele (*p)++, 
                          nebo adresu nov�ho prvku *p++; */
  printf("%d\n", q);   /* zobraz� p��mo hodnotu q */
  return 0;
}
