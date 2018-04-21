#include <stdio.h>
int main(){
int a,b,c,d,x,pf;

printf("introduce cuatro numeros: ");

scanf("%i",&a);	
scanf("%i",&b);	
scanf("%i",&c);	
scanf("%i",&d);	

x = a + b + c + d;
	
pf= x / 4;

printf("la media es: %i", &x);

return 0;
}
