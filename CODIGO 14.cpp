#include<stdio.h>

int main (){
	int a,b;
	printf ("ingrese 2 numeros enteros\n");
	scanf ("%d,%d",&a,&b);
	
	if (a<b) printf ("%d es mayor que %d",b,a);
	else if(b<a) printf ("%d es mayor que %d",a,b);
	else if (a==b) printf ("no hay mayor, ambos son iguales");
	
	return 0;
	
}
	
