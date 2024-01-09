#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p, q;
  q = 199;   /* p�i�ad� q hodnotu 199 */
  p = &q;    /* p�i�ad� p adresu q */
  
  printf("%d\n", *p);  /* zobraz� q pomoc� ukazatele */
  printf("%d\n", q);   /* zobraz� p��mo hodnotu q */
  printf("%d\n", p);   /* zobraz� adresu q */
  printf("%d\n", &p);  /* zobraz� adresu p */
  return 0;
}
/*
Prom�nn� p je deklarovan� jako ukazatel a q, kter� je
cel� ��slo.Pak je q p�i�azena hodnota 199, na dal��m ��dku
je pomoc� p = &q p�i�azena do p adresa prom�nn� q. 
Oper�tor & lze slovn� vyj�d�it jako "adresa n��eho".
Pomoc� printf vyp�eme adresy a hodnoty prom�nn�ch.
*/
