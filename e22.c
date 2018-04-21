#include <stdio.h>

main () {
	
	int a,b;
	
	printf ("en que numero iniciara el programa (enteros) \n");
	scanf ("%d", &a);
	printf ("en que numero finalizara el programa (enteros) \n");
	scanf ("%d", &b);
	printf ("\n\n");
	
	while ( a <= b) {
	   	printf ("%d\n",a);
		a++;
		
	}
		
	return 0;
}
