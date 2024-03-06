#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pole[5]; /* index pole v�dy od 0 */
  int i;
  FILE *fw, *fr;  /* FILE - datov� typ pro pr�ci se soubory */
  
  fr = fopen("text2.txt","r");/* otev�en� souboru pro �ten� */
  fw = fopen("kopie2.txt","w");/* otev�en� souboru pro z�pis */
  
  for(i = 0; i < 5; i++)
    fscanf(fr,"%d", &pole[i]);  /* na�ten� hodnot do "pole" */
  
  for(i = 0; i < 5; i++)    /* z�pis hodnot do souboru */
    fprintf(fw,"prvek pole %d\n", pole[i]);
    
  fclose(fw);           /* uzav�en� souboru */
  fclose(fr);

  return 0;
}
