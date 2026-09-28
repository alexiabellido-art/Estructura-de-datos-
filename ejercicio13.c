#include <stdio.h>

int main() {
    const int N = 10;
    int edades[N];
    int suma = 0;
    int minima, maxima;

    printf("Ingrese las %d edades:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Edad %d: ", i + 1);
        scanf("%d", &edades[i]);
        suma += edades[i];
    }

    minima = edades[0];
    maxima = edades[0];
    for (int i = 1; i < N; i++) {
        if (edades[i] < minima) minima = edades[i];
        if (edades[i] > maxima) maxima = edades[i];
    }

    float media = (float)suma / N;

    int contador = 0;
    for (int i = 0; i < N; i++) {
        if (edades[i] > media) contador++;
    }

    printf("\nEdad minima: %d\n", minima);
    printf("Edad maxima: %d\n", maxima);
    printf("Media: %.2f\n", media);
    printf("Participantes por encima de la media: %d\n", contador);

    return 0;
}
