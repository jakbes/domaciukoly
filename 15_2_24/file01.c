#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pole[5]; /* index pole v�dy od 0 */
  int i;
  FILE *fw;  /* FILE - datov� typ pro pr�ci se soubory */
             /* *-nutn�, fw - prom�nn� pro z�pis */
  printf("Zadejte 5 prvku pole:\n");

  fw = fopen("text1.txt","a");/* otev�en� souboru pro r || w || a */

  for(i = 0; i < 5; i++)
    scanf("%d", &pole[i]);  /* na�ten� hodnot do "pole" */

  for(i = 0; i < 5; i++)    /* z�pis hodnot do souboru */
    fprintf(fw,"prvek pole %d\n", pole[i]);

  fclose(fw);           /* uzav�en� souboru */

  return 0;
}
