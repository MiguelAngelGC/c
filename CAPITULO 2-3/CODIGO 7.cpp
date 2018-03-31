#include<stdio.h>
#include<iostream>
#include<conio.h>
 
int main (){
	
	int n,c;
	printf ("Cual es el valor del numero?\n");
	scanf("%d",&n);
	
	c=n%2;

	if (c==0)
	printf ("es par");

	else
    printf("es impar"); 
	
	
	getch ();
	return 0;
		
	}
