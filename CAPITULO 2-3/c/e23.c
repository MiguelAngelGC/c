#include <stdio.h>

main () {
	
	int a,b;
	
	printf ("escriba cuantos * imprimira el programa\n");
	scanf ("%d", &b);
	printf ("\n\n");
	for (a = 1; a <= b; a++)
	printf ("*\n");
	
	return 0;
}
