#include <stdio.h>
#include <ctype.h> 
#include <conio.h>
 
int main()
{
   char cadena[10];
   int x,y;
  printf ("Introduce la cadena de caracteres a convertir\n");
  scanf ("%s",&cadena);
  
  
   for(x = 0; cadena[x]; x++)
   cadena[x] = tolower(cadena[x]); 
   
   for(y = 0; cadena[y]; y++)
   cadena[y] = toupper(cadena)[y]);
 
   printf("%s\n", cadena); 
   getch();
   return 0;
}
