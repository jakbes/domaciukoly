#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p, q;
  p = &q;    /* p�i�ad� p adresu q */
  *p = 199;  /* p�i�ad� hodnotu do q pomoc� ukazatele */
  
  printf("%d\n", *p);  /* zobraz� q pomoc� ukazatele */
  printf("%d\n", q);   /* zobraz� p��mo hodnotu q */
  printf("%d\n", p);   /* zobraz� adresu q */
  printf("%d\n", &p);  /* zobraz� adresu p */
  return 0;
}
