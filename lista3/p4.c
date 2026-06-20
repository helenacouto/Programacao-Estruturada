#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, *vetor, *positivos, *negativos;
    int qntdPositivos = 0, qntdNegativos = 0, qntdZeros = 0;
    int indiceP = 0, indiceN = 0;

    printf("Quantos valores inteiros serao? ");
    scanf("%d", &N);

    vetor = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if (vetor[i] > 0) {
            qntdPositivos += 1;
        } else if (vetor[i] < 0) {
            qntdNegativos += 1;
        } else {
            qntdZeros += 1;
        }
    }

    if (qntdPositivos > 0) {
    positivos = malloc(qntdPositivos * sizeof(int));
    } else {
    positivos = NULL;
    }

    if (qntdNegativos > 0) {
        negativos = malloc(qntdNegativos * sizeof(int));
    } else {
        negativos = NULL;
    }

    for (int i = 0; i < N; i++) {
        if (vetor[i] > 0) {
            positivos[indiceP++] = vetor[i];
        } else if (vetor[i] < 0) {
            negativos[indiceN++] = vetor[i];
        }
    }

    printf("\nValores positivos: ");
    for (int i = 0; i < qntdPositivos; i++) {
        if (i != qntdPositivos - 1) {
            printf("%d, ", positivos[i]);
        } else {
            printf("%d.", positivos[i]);
        }
    }

        printf("\n\nValores negativos: ");
    for (int i = 0; i < qntdNegativos; i++) {
        if (i != qntdNegativos - 1) {
            printf("%d, ", negativos[i]);
        } else {
            printf("%d.", negativos[i]);
        }
    }

    printf("\n\n%d valor(es) igual a zero.", qntdZeros);

    free(positivos);
    positivos = NULL;
    free(negativos);
    negativos = NULL;
    free(vetor);
    vetor = NULL;

    return 0;
}