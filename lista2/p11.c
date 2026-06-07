#include <stdio.h>

void reduz(int *a, int *b) {
    if (*a > *b) {
        *a -= *b;
    } else {
        *b -= *a;
    }
}

int main() {
    int a, b, operacoes = 0;

    printf("Digite a e b: ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        reduz(&a, &b);
        operacoes += 1;
    }

    printf("%d operacoes foram necessarias para estabilizacao.", operacoes);
    return 0;
}