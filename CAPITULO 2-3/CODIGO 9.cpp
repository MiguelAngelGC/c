#include<stdio.h>

int main (){
	int a,b;
	printf ("Ingrese 2 valores enteros\n");
	scanf ("%d,%d",&a,&b);

	if (a%b==0){
	 printf ("\n%d es multiplo de %d",a,b);
	 }
	else {
	 printf ("\n%d no es multiplo de %d",a,b);
	}
	
	return 0;
	
}
