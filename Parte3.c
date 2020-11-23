//Parte 3
#include <stdio.h>

int main () {

char str [100];

    printf("Como te llamas?");
    fgets( str, 100, stdin );

    if (str ==" ")
    {
        printf ("Error\n");
    }
    
   else
   {
       printf("Hola, me llamo: ");
       puts(str);
   }
   
    return 0;
}