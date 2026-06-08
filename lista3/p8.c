#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, *inteiros;
    int X, qntdX = 0;

    printf("\nQuantos numeros inteiros serao lidos? ");
    scanf("%d", &N);

    inteiros = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        printf("\nDigite o valor %d: ", i + 1);
        scanf("%d", &inteiros[i]);
    }

    printf("\nDigite o valor de X: ");
    scanf("%d", &X);

    printf("\n'%d' aparece nas posicoes:", X);
    for (int i = 0; i < N; i++) {
        if (inteiros[i] == X) {
            printf(" %d ", i);
            qntdX += 1;
        }
    }
    printf("\n'%d' apareceu %d vezes.", X, qntdX);

    free(inteiros);
    return 0;
}