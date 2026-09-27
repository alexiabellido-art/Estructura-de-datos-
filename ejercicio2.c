#include <stdio.h>

int main() {
    int identificador;
    int edad;
    float valorpromedio;
    char categoria;
    int esvalido; // 1 = valido, 0 = no valido

    printf("Ingrese identificador: ");
    scanf("%d", &identificador);
    printf("Ingrese edad: ");
    scanf("%d", &edad);
    printf("Ingrese valor promedio: ");
    scanf("%f", &valorpromedio);
    printf("Ingrese categoria (una letra): ");
    scanf(" %c", &categoria);
    printf("Es valido el registro? (1=si, 0=no): ");
    scanf("%d", &esvalido);

    
    printf("ID: %d\n", identificador);
    printf("Edad: %d\n", edad);
    printf("Valor promedio: %.2f\n", valorpromedio);
    printf("Categoria: %c\n", categoria);
    printf("Valido: %s\n", esvalido ? "Si" : "No");

    return 0;
}
