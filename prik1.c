#include <stdio.h>
int main (void){

  int a,b;
  char c;

	printf ("zadaj cisla a znak\n");
	if (scanf (" %d  %d  %c", &a,&b,&c)!=3  
			|| ( a > b )
			|| ( c!='l' ) 
			|| (a<0)
			|| (b<0))
			/* nedari sa mi pridat podmienky pre C aby nebolo ine ako l,z,s ... ak tam dam c != 'z' a to skompilujem a spustim tak to hadze zly vysledok aj ked zadam dobre ale neviem preco */
			printf ("neplatny vstup\n");
		
	
	else
		printf ("vsetko ok\n");
		return 0;
	


return 0;
}

