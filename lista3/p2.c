#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4], soma1, soma2;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor atribuido a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    soma1 = matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3];
    soma2 = matriz[0][3] + matriz[1][2] + matriz[2][1] + matriz[3][0];

    if (soma1 == soma2) {
        printf("As somas da diagonal principal e da diagonal secundaria sao iguais.");
    } else {
        printf("As somas da diagonal principal e da diagonal secundaria sao diferentes.");
    }

    return 0;
}