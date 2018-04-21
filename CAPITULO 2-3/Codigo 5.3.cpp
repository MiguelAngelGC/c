#include<stdio.h>
#include<math.h>

int main (){
	float a,A,b,B,c,C;
	printf ("Dame los numeros que deseas redondear");
	scanf ("%f%f%f",&a,&b,&c);
	
	A= floor (a + .5);
	B= floor (b + .5);
	C= floor (c + .5);
	
	printf ("%f = %f\n%f = %f\n%f = %f\n",a,A,b,B,C,c);
	
	return 0;
}
