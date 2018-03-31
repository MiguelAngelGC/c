#include<stdio.h>

int main (){
	int a,b,c,d,e;
	printf ("Ingresa 5 numeros enteros\n");
	scanf ("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	
	if (b,c,d,e<a) printf ("el numero mayor es %d\n",a);
	 else if (a,c,d,e<b) printf ("el numero mayor es %d\n",b);
	 else if (a,b,e,d<c) printf ("el numero mayor es %d\n",c);
	 else if (a,b,c,e<d) printf ("el numero mayor es %d\n",d);
	 else if (a,b,c,d<e) printf ("el numero mayor es %d\n",e);
	
	if (b,c,d,e>a) printf ("el numero menor es %d\n",a);
	 else if (a,c,d,e>b) printf ("el numero menor es %d\n",b);
	 else if (a,b,e,d>c) printf ("el numero menor es %d\n",c);
	 else if (a,b,c,e>d) printf ("el numero menor es %d\n",d);
	 else if (a,b,c,d>e) printf ("el numero menor es %d\n",e);
	 
	return 0;
	
}
	 

	
	
