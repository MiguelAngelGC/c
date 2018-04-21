#include <stdio.h>
#include <ctype.h> 
#include <conio.h>
 
int main()
{
   char cadena[90];
   int x,y,c;
  printf ("Introduce la cadena de caracteres a convertir\n");
  scanf ("%s",&cadena);
  
  
 
   for(x = 0; cadena[x]; x++){
   if (c>='a',c<='Z');

   cadena[x] = tolower(cadena[x]); 

   cadena[y] = toupper(cadena[y]);
   }
 
   printf("%s\n", cadena); 
   getch();
   return 0;
}
