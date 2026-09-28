#include <stdio.h>

int main()
{
   int totalregistro,numnodos;
   int registropornodo,sobrantes;
   
   printf ("ingrese el total de registros: ");
   scanf ("%d",&totalregistro);
   
    printf ("ingrese el numero de nodos: ");
    scanf ("%d",&numnodos);
    
    registropornodo=totalregistro/numnodos;
    sobrantes=totalregistro%numnodos;

    printf("cada nodo procesa: %d\n", registropornodo);
    printf("regristros sin distribuir unif: %d\n", sobrantes);


    return 0;
}
