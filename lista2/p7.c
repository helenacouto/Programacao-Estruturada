#include <stdio.h>

int inverte(int n, int acumulador) {
    if (n == 0) {
        return acumulador;
    } else {
        return inverte(n/10, acumulador * 10 + n % 10);
    }
}

int ehPalindromo(int n) {
    if (n == inverte(n, 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if (ehPalindromo(num) == 1) {
        printf("Eh palindromo");
    } else {
        printf("Nao eh palindromo");
    }

    return 0;
}