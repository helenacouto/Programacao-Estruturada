#include <stdio.h>

int main() {

    int num, i, maior = -99999, posicao;

    for (i = 1; i <= 10; i++) {
        printf("\nDigite um numero inteiro:\n");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
            posicao = i;
        }
    }

    printf("\nO maior valor foi %d da posicao %d.", maior, posicao);

    return 0;
}