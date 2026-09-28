#include <stdio.h>

int main()
{
   int edad;
   float registrovalido; //1=si,0=no
  
   printf("ingrese la edad:");
   scanf("%d",&edad);
    printf("el registro es valido si (1=si,0=no:");
   scanf("%d",&registrovalido);
   
   if(edad >= 18  && registrovalido==1){
       printf("la observacion puede incorporarse al conjunto de datos: \n");
   }
   else{
       printf("la observacion no puede incorporarse al conjunto de datos:\n");}
   



    return 0;
}
