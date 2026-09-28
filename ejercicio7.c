#include <stdio.h>

int main()
{
   int observaciones;
   float porcentajecompleto;
  
   printf("ingrese el numero de observaciones validas:");
   scanf("%d",&observaciones);
    printf("ingrese el porcentaje de datos completos:");
   scanf("%f",&porcentajecompleto);
   
   if(observaciones >= 100 && porcentajecompleto >=70){
       printf("el conjunto de datos cumple las condiciones para ser realizado: \n");
   }
   else{
       printf("el conjunto de datos no cumple las condiciones minimas:\n");}
   



    return 0;
}
