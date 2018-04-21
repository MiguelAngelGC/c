#include <stdio.h>
int main(){
float x,c,d,t,p;
printf("Cual es el precio?: ");
scanf("%f",&p);

printf("Cual es el porcentaje de descuento?: ");
scanf("%f",&x);
c =  x/100; 
d = p*c;
t = p-d;
printf("tu total a pagar es de: $%f",t);


return 0;
}

