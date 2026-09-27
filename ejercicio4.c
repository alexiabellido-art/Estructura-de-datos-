#include <stdio.h>

int main()
{
   int reg1,reg2;
   
   printf ("ingrese el registro procesado de algoritmo 1: ");
   scanf ("%d",&reg1);
   
    printf ("ingrese el registro procesado de algoritmo 2: ");
    scanf ("%d",&reg2);

    printf("suma: %d\n", reg1 + reg2);
    printf("diferencia: %d\n", reg1 - reg2);
    printf("producto: %d\n", reg1 * reg2);
    printf("divicion entera: %d\n", reg1 / reg2);
    printf("residuo: %d\n", reg1 % reg2);

    return 0;
}
