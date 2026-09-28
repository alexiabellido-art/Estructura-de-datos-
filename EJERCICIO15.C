#include <stdio.h>

float calcular_promedio(float m1, float m2, float m3) {
    return (m1 + m2 + m3) / 3.0;
}

int contar_sobre_promedio(float m1, float m2, float m3, float promedio) {
    int contador = 0;
    if (m1 > promedio) contador++;
    if (m2 > promedio) contador++;
    if (m3 > promedio) contador++;
    return contador;
}

int main() {
    float m1, m2, m3;

    printf("Ingrese la medicion 1: ");
    scanf("%f", &m1);
    printf("Ingrese la medicion 2: ");
    scanf("%f", &m2);
    printf("Ingrese la medicion 3: ");
    scanf("%f", &m3);

    float promedio = calcular_promedio(m1, m2, m3);
    int cantidad = contar_sobre_promedio(m1, m2, m3, promedio);

    printf("\nPromedio: %.2f\n", promedio);
    printf("Mediciones por encima del promedio: %d\n", cantidad);

    return 0;
}
