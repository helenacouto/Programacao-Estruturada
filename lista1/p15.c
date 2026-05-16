#include <stdio.h>

int main() {

    int N, i;
    float X, Y, resultado;

    printf("Quantos pares serao processados?\n");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Digite o X:\n");
        scanf("%f", &X);
        printf("Digite o Y:\n");
        scanf("%f", &Y);

        if (Y == 0) {
            printf("Divisao impossivel.\n");
        } else {
            resultado = X/Y;
            printf("Resultado da divisao X por Y: %f\n", resultado);
        }
    }

    return 0;
}