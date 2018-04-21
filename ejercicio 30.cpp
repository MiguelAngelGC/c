#include <stdio.h>
#include <string.h>

main () {
	
	char c[2];
	printf ("escriba la letra c\n");
	scanf ("%s", &c);
	
	
while (strcmp (c,"c") == 1) {
	printf ("%s es incorrecta, por favor escriba la letra c\n",c);
	scanf ("%s", &c);
}
if (strcmp (c,"c") == 0)
    printf ("\n\n");
	printf ("gracias \n");
return 0;
	
}
