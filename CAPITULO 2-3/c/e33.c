#include <stdio.h>
#include <math.h>
#include <string.h>

main () {
	
	char continuar[1];
	float a, b, c, d;
	
	printf ("desea continuar con el programa s/n \n");
	scanf ("%s", &continuar);
	
while (strcmp (continuar, "s") == 0){
	
	if (strcmp (continuar, "s") == 0){
	printf ("desea continuar con el programa s/n \n");
	scanf ("%s", &continuar);
}
	else if (strcmp (continuar, "n") == 0)
	goto exit;
    	
	d = b*b - (4*a*c);
	
	printf ("resolucion de ecuaciones de segundo grado\n");
	printf ("ax 2+bx+c=0 \n");
	printf ("\n");
	
	printf ("introduzca el termino a:\n");
	scanf  ("%f", &a);
	printf ("introduzca el termino b:\n");
	scanf  ("%f", &b);
	printf ("introduzca el termino c:\n");
	scanf  ("%f", &c);
	
	
	if (d == 0){
	printf ("x1 = %.2f\n", -b/(2*a));
}
	else if (d > 0){
		
	printf (" x1=%.2f\n", -b + (sqrt (d))/ (2*a));
	printf (" x2=%.2f\n ", -b - (sqrt (d))/ (2*a));
}
exit:
return 0;
}

	 
}
