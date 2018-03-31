#include<stdio.h>

int main (){
	
	int a,b;
	printf ("Introduzca 2 numeros enteros\n");
	scanf ("%d,%d",&a,&b);
	
	if (a<b) printf ("%d es mas grande que %d",b,a);
	else if (b<a) printf ("%d es mas grande que %d",a,b);
	else if (a==b) printf ("los numeros son iguales");
	
	return 0;
	
}
