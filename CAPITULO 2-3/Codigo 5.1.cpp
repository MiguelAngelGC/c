#include<stdio.h>
#include<math.h>

int main(){
	float x;
	printf("Escriba un numero\n");
	scanf ("%f",&x);
	
    x= fabs (7,5);
    x= floor (7,5);
    x= fabs (0,0);
    x= ceil (0,0);
    x= fabs (-6,4);
    x= ceil (-6,4);
    x= ceil (-fabs ( -8 + floor( -5.5)));
    
    printf ("EL VALOR DE X es: %f", x);
    return 0;
          }
