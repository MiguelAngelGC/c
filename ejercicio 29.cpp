#include <stdio.h>
#include <string.h>

main () {
	
	char tipo[2];
	int a,b;
	
	printf ("en que numero iniciara el programa (enteros) \n");
	scanf ("%d", &a);
	printf ("en que numero finalizara el programa (enteros) \n");
	scanf ("%d", &b);
	printf ("que numeros desea imprimir p=pares i=impares\n");
	scanf ("%s", &tipo);
	printf ("\n\n");

	for (a ; a <= b; a++){
    if (strcmp(tipo, "i") == 0)
	  if (a % 2 >= 1)
	    printf ("%d es impar \n",a);
	    
	if (strcmp(tipo, "p") == 0)
	  if (a % 2 == 0)
	    printf ("%d es par \n",a);

}
	return 0;
}
