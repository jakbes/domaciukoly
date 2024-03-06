#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pole[5];         /* index pole v�dy od 0 */
  int i = 0, j = 0;    /* definice prom�nn�ch */
  FILE *fw, *fr;       /* FILE - datov� typ pro pr�ci se soubory */
   
  fr = fopen("text3.txt","r");  /* otev�en� souboru pro �ten� */
  fw = fopen("kopie3.txt","w"); /* otev�en� souboru pro z�pis */
  
  while(j < 5){
    pole[i] = getc(fr);
    i++;                  /* zv��en� indexu pole */
    j++;                  /* 5 prvk� */
  }
  
  for(i = 0; i < 5; i++)    /* i = 0 je zde vhodn� */
    fprintf(fw,"prvek pole %c\n", pole[i]);
                            /* z�pis hodnot do souboru */
  fclose(fw);                /* uzav�en� souboru pro z�pis*/
  fclose(fr);                /* uzav�en� souboru pro �ten�*/

  return 0;
}
