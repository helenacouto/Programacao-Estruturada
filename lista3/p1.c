#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *valores;
    int maior = -9999999, posicaoMaior, menor = 9999999, posicaoMenor;

    printf("Quantos valores serao armazenados? ");
    scanf("%d", &n);

    valores = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Digite o %d valor: ", (i+1));
        scanf("%d", &valores[i]);

        if (valores[i] > maior) {
            maior = valores[i];
            posicaoMaior = i;
        }
        if (valores[i] < menor) {
            menor = valores [i];
            posicaoMenor = i;
        }
    }

    float media;
    media = (maior + menor) / 2.0;

    printf("\nMaior valor foi %d que estava no indice %d.", maior, posicaoMaior);
    printf("\nMenor valor foi %d que estava no indice %d.", menor, posicaoMenor);
    printf("\nA media entre o maior e menor valor eh %.1f.", media);

    free(valores);
    return 0;
}