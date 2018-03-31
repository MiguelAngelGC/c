#include <stdio.h>
#include <conio.h>
 
int main()
{
    int num,contador=1;
    printf("Intruce un numero para mostrarte cuantos 7 tiene ");
    scanf("%d",&num);
 
    while(num/10>0)
    {
        num=num/10;
        contador++;
    }
    printf("Tiene %d caracteres",contador);
    getch();
    return 0;
    
}
