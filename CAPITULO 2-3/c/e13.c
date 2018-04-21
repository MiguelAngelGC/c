#include <stdio.h>
#define PI 3.1416
int main(){
float r,c,v,a;
printf("introduce el radio: \n");
scanf("%f",&r );	
c=2+PI*r;
a=PI*r*r;
v=4*PI*r*r*r/3;

printf("la circunferencia es: %f\n el area es: %f \n el volumen es: %f",c,a,v );
return 0;
}
