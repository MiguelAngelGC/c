#include <stdio.h>

main () {
	
	int a,b;
	
	printf ("escriba hasta que numero imprimira el programa\n");
	scanf ("%d", &b);
	printf ("\n\n");
	for (a = 1; a <= b; a++)
	printf ("%d\n",a);
	
	return 0;
}
