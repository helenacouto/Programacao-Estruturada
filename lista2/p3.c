#include <stdio.h>

int somaDiv(int n, int d){
    if (d >= n) {
        return 0;
    }
    if (n % d == 0) {
        return d + somaDiv(n, d + 1);
    }
    return somaDiv(n, d + 1);
}

int ehPerfeito(int n) {
    return somaDiv(n, 1) == n;
}

int main() {
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);

    if (ehPerfeito(n)) {
        printf("O numero eh perfeito.");
    } else {
        printf("O numero nao eh perfeito.");
    }

    return 0;
}