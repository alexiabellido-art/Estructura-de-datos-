#include <stdio.h>

int main() {
    int n;
    long operacionesUnRecorrido = 0;
    long operacionesDosCiclos = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Procedimiento 1: un solo recorrido -> O(n)
    for (int i = 0; i < n; i++) {
        operacionesUnRecorrido++;
    }

    // Procedimiento 2: dos ciclos anidados -> O(n^2)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            operacionesDosCiclos++;
        }
    }

    printf("\nOperaciones con un recorrido (O(n)): %ld\n", operacionesUnRecorrido);
    printf("Operaciones con dos ciclos anidados (O(n^2)): %ld\n", operacionesDosCiclos);

    return 0;
}
