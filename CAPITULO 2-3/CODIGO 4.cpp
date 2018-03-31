#include<stdio.h>

int main (){
	int a,b,c,suma,promedio,producto;
	printf ("Introduzca 3 numeros enteros\n");
	scanf ("%d,%d,%d",&a,&b,&c);
	
	suma= a+b+c;
	promedio=(a+b+c)/3;
	producto= a*b*c;
	
	printf ("\nla suma es %d\n",suma);
	printf ("el promedio es %d\n",promedio);
	printf ("el producto es %d\n",producto);
	
	if (b,c<a)
     printf ("el numero mas grande es %d\n",a );
	 else if (b,a<c) printf ("el numero mas grande es %d\n",c);
	 else if (a,c<b) printf ("el numero mas grande es %d\n",b);
	 
	if (a<b,c)
	 printf ("el numero mas chico es %d\n",a);
	 else if (b<a,c) printf ("el numero mas chico es %d\n",b);
	 else if (c<a,b) printf ("el numero mas chico es %d\n",c);
		
	return 0;
	
}
	
