#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int pocet = 0; 
  int c;
  FILE *fr;
  
  if((fr = fopen("text4.txt","r")) == NULL){
  	printf("Soubor se nepodarlo otevrit negre.\n");
  	exit(1); //return 1
  }
  
  while((c = getc(fr)) != EOF){ /* p�e�ten� souboru */
    if(c == '\n')
      pocet++;
  }
  
  pocet++;   /* p�ipo�ten� EOF */  
  printf("Pocet radku je %d\n", pocet); /* v�pis po�tu */
   
  if (fclose(fr) == EOF){  /* test zav�en� */
    printf("Soubor se nepodarilo zavrit.\n");
    return 1;
  }
	return 0;
}
