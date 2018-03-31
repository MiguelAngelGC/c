#include<stdio.h>

int main (){
	
	int n,m,o,p;
	n=0;
	printf (" N   N*10   N*100   N*1000\n");
	while (n<10){	
		n=n+1;
		m=n*10;
		o=n*100;
		p=n*1000;
		printf (" %d   %d     %d     %d\n",n,m,o,p);
	}
	return 0;
}
