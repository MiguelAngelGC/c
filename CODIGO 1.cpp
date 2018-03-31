#include<stdio.h>

int main (){
	int a,b,suma,resta,division,multiplicacion;
	printf ("Introduzca 2 numeros enteros\n");
	scanf ("%d,%d",&a,&b);
	suma = a + b ;
	printf ("el resultado de la suma es %d\n",suma);
	resta = a - b ;
	printf ("el resultado de la resta es %d\n",resta);
	division = a / b ;
	printf ("el resultado de la division es %d\n",division);
	multiplicacion = a * b ;
	printf ("el resultado de la multiplicacion es %d",multiplicacion);
	
	return 0; 
}
