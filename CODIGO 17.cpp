#include<stdio.h>

int main (){
	
	int n,m,o,p;
	n=0;
	printf (" A   A+2   A+4   A+6\n");
	while (n<15){	
		n=n+3;
		m=n+2;
		o=n+4;
		p=n+6;
		printf (" %d   %d     %d     %d\n",n,m,o,p);
	}
	return 0;
}
