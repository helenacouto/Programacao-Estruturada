#include <stdio.h>

int main() {

    int num, i, resultado;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    for (i = 1; i <= 20; i++) {
        resultado = num * i;
        printf("\n%d x %d = %d", num, i, resultado);
    }

    return 0;
}