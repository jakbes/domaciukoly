#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) ((i)>(j)) ? (i) : (j)
/* pokud bychom nedali prom�nn� do z�vorek a dosdili za n� v�razy
s r�zn�mi oper�tory, nemusely by v�sledky d�vat po�edovan� hodnoty */

int main(void)
{
  printf("vetsi je %d\n", MAX(1,2));
  printf("vetsi je %d\n", MAX(1, -1));
	
  return 0;
}
/* makro je p�evedeno na ("%d", i>j ? i : j);
                                1>2 ? 1 : 2); atd..
*/
