#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pocet = 0; 
  int c;
  FILE *fr;
  
  if((fr = fopen("text4.txt","r")) == NULL){ /* test otev�en� */
    printf("Soubor se nepodarilo otevrit.\n");
    return 1;
  }
  
  while((c = getc(fr)) != EOF){ /* p�e�ten� souboru */
    if(c == ' ' || c == '\n')
      pocet++;
  }
  pocet++;   /* p�ipo�ten� EOF */  
  printf("Pocet slov je %d\n", pocet); /* v�pis po�tu */
   
  if (fclose(fr) == EOF){  /* test zav�en� */
    printf("Soubor se nepodarilo zavrit.\n");
    return 1;
  }
    
  return 0;
}
