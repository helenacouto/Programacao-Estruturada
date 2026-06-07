#include <stdio.h>

int somaImpares(int X, int Y) {   
    if (X > Y) {
        int Z;
        Z = Y;
        Y = X;
        X = Z;
    }

    int soma = 0;
    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {
    int X, Y;

    printf("Digite X e Y: ");
    scanf("%d %d", &X, &Y);

    printf("A soma dos numeros impares estritamente entre eles: %d", somaImpares(X, Y));
    return 0;
}