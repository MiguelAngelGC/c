#include<stdio.h>

int main(){
		char iniciales[5] ;
		float altura;
	printf ("introduce tus iniciales\n");
	scanf ("%s",&iniciales);
	printf ("introduce tus ALTURA\n");
	scanf ("%f",&altura);
	
	printf ("Sus iniciales son %s y su altura es %.2f",iniciales,altura);
	
	return 0;
}

