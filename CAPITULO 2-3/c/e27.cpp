#include <stdio.h>

main () {
	
	int a,b,c,mayor, mayor2, minimo;
	
	printf ("escriba tres numero enteros\n");
	scanf ("%d%d%d", &a, &b, &c);

	mayor = a;
	mayor2 = a;
	minimo= a;
	
	if (b > mayor)
	mayor = b;
	
	if (c > mayor)
	mayor = c;
	
	printf ("el numero mayor es %d \n", mayor);
	
    if (b > minimo || b < mayor)
    mayor2 = b;
    
    if (c > minimo || c < mayor)
    mayor2 = c;
    
    printf ("el segundo numero mayor es %d \n", mayor2);

	if (b < minimo)
	minimo = b;
	
	if (c < minimo)
	minimo = c;
	
	printf ("el numero mas chico es %d \n", minimo);
	
	return 0;
}
