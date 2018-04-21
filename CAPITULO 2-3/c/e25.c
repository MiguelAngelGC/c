#include <stdio.h>

main () {
	
	int a, b, c;
	
	printf ("escriba tres neteros para determinar los pares y los impares\n");
	scanf ("%d%d%d", &a, &b, &c);
	
	if (a % 2 == 0 )
	printf ("el numero %d es par\n", a);
	
	else
	printf ("el numero %d es impar\n", a);
	
	if (b % 2 == 0 )
	printf ("el numero %d es par\n", b);
	
	else
	printf ("el numero %d es impar\n", b);
	
	if (c % 2 == 0 )
	printf ("el numero %d es par\n", c);
	
	else
	printf ("el numero %d es impar\n", c);
}
