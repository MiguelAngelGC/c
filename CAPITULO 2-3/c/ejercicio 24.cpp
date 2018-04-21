#include <stdio.h>

main () {
	
	float mayor, a, b;
	
	printf ("introduzca dos enteros para determinar el mayor y el menor\n");
	scanf ("%f%f", &a, &b);
	
	mayor = a;
	
	if (b > a)
	mayor = b;
	
	printf ("el numero mayor es %.2f", mayor);
	return 0;
	
}
