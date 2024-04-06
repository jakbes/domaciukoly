/* ukazatel na strukturu */
#include <stdio.h>
#include <stdlib.h>

struct s_type{
  int i;
  char c;
}s, *p; /* s - prom�nn� struktury, *p - ukazatel */

int main(void)
{
  p = &s;   /* p�i�azen� adresy ukazateli */
  
  s.i = 10;   /* p��stu k i pomoc� prom�nn� struktury */
  printf("i = %d\n", s.i); /* p->i */
  
  p->i = 20;  /* p��stup k i pomoc� ukazatele */
  printf("i = %d\n", p->i); /* s.i */
  
  s.c = 'A';   /* p��stu k c pomoc� prom�nn� struktury */
  printf("c = %c\n", s.c);
  
  p->c = 'B';  /* p��stup k c pomoc� ukazatele */
  printf("c = %c\n", p->c);
  system("pause");	
  return 0;
}

