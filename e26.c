#include <stdio.h>
#include <string.h>

main () {
	
	char momento[2],sexo[2];
	
	printf ("que momento del dia es ( indique con una letra d,t,n)\n");
	scanf ("%s", &momento);
	
	printf ("cual es su sexo (indique con una letra h,m)\n");
	scanf ("%s", &sexo);
	
	if (strcmp(momento, "d") == 0)
	printf ("buenos dias");
	
	if (strcmp(momento, "t") == 0)
	printf ("buenas tardes");
	
	if (strcmp(momento, "n") == 0)
	printf ("buenas noches");
	
	if (strcmp (sexo, "h") == 0)
	printf (" se�or\n");
	
	if (strcmp (sexo, "m") == 0)
	printf (" se�ora\n");
	
	return 0;
}
