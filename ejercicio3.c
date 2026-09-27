#include <stdio.h>

int main()
{
    float medicion;
   int medicionEntera;
   float perdida;
   
   printf("ingrese la medicion decimal: ");
   scanf("%f", &medicion);

    medicionEntera = (int)medicion; 
    perdida = medicion - medicionEntera;

    printf("Valor original: %f\n", medicion);
    printf("Valor convertido a entero: %d\n", medicionEntera);
    printf("Valor decimal perdido: %f\n", perdida);


    return 0;
}
