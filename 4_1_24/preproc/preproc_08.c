#include <stdio.h>
#include <stdlib.h>

#define DOG

int main(int argc, char *argv[])
{
  #ifdef DOG   /* jen je-li DOG definov�no */
    printf("DOG je definovano\n"); 
  #endif
  
  #undef DOG
  
  #ifndef DOG  /* jen nen�-li DOG definov�no */
    printf("DOG uz neni definovano\n");
  #endif
  
  #ifdef DOG  /* neprovede se - zru�en� #undef DOG */
    printf("Toto je neprelozi\n");
  #endif
	
  return 0;
}
