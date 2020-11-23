//Parte 8
#include <stdio.h>

int main ()
{
int num;
FILE *err;

    printf("Ingrese un valor: ");
    scanf("%d",&num);

if (num < 0)
{
    char arch [100];

    err=fopen("err.txt", "r");
    fgets(arch, 100, err);
    
    printf("%s", arch);
}

if (num > 0)
{

}

    return 0;
}