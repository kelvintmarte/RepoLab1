//Parte7
#include <stdio.h>

int main ()
{
    int num;
    FILE *out;

    printf("Ingrese un valor: ");
    scanf("%d",&num);

    if (num <= 0)
    {
        char arch [100];

        out=fopen("out.txt", "r");
        fgets(arch, 100, out);

        printf("%s", arch);
    }

    if (num > 0)
    {
        printf("Este valor es valido");
    }
    
    return 0;
}