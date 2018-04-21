#include<stdio.h>

int main (){
	int a,b,c=0,d=0;
	printf ("Ingresa el primer valor del conjunto\n");
	scanf ("%d",&a);

    
         b=0;
    while (b<a){
         
	 	printf ("ingresa el valor\n");
	 	scanf ("%d",&d);
	 	b++;
	 	printf(" valor anterior %d\n ",c);
	 	c+=d;
	 	printf("nuevo valor c = c + d   %d = %d + %d       %d\n ",c,c,d,c);
	 
	 }
	 printf(" el resultado de la suma es %d",c);
}
