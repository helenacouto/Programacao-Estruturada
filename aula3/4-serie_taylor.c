#include <stdio.h>

int main() {
    int valor, i, j;
    int denominador;
    float resultado = 1;

    printf("Digite um valor inteiro positivo:\n");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++) {
        denominador = 1;

        for(j = i; j > 0; j--) {
            denominador *= j;
        }

        resultado += 1.0/denominador;
    }

    printf("E = %.2f", resultado);

    return 0;
}