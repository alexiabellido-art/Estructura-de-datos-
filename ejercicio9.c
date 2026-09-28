#include <stdio.h>

int main()
{

   float temperatura;
  
   printf("ingrese la temperatura:");
   scanf("%f",&temperatura);
   
   if(temperatura<0){
       printf("clasificacion:congelacion \n");
   }
   else if (temperatura<=20){
        printf("clasificacion:frio \n");}
        else{
         printf("clasificacion:templado \n");
    ;}
   



    return 0;
}
