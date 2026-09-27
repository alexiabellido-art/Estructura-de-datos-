#include <stdio.h>

int main()
{
    int horas;
    float costporhora,costototal;
    printf("ingresa las horas trabajadas: ");
    scanf("%d", &horas);
    
    printf("ingresa el costo por hora: ");
    scanf("%f", &costporhora);
    
    
    costototal=horas*costporhora;
    
    printf("horas trabajadas: %d\n",horas);
    printf("tarifa aplicada por hora: %f\n ",costporhora);
    printf("costo final: %f \n",costototal);
    return 0;
}
