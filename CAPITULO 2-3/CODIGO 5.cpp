#include<stdio.h>

int main (){
	
	float PI,radio,diametro,area,perimetro;

	printf ("Cual es el radio de la circunferencia?\n");
	scanf ("%f",&radio);

	PI = 3.14159;
	diametro= radio * 2;
	area=(radio*radio) * PI;
	perimetro= diametro * PI;
	
	printf ("el diametro de la circunferencia es %.2f \n",diametro);
	printf ("el area de la circnferencua es %.2f \n",area);
	printf ("el perimetro de la circunferencia es %.2f",perimetro);
	
	return 0;
	
}

