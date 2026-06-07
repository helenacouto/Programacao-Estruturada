#include <stdio.h>

int mediaPositivos(float valores[], int *positivos) {
    *positivos = 0;
    float soma = 0;

    for (int i = 0; i < 6; i++) {
        if (valores[i] > 0) {
            *positivos += 1;
            soma += valores[i];
        }
    }
    return soma / (*positivos);
}

int main() {
    float valores[] = {0, 0, 0, 0, 0, 0}, media;
    int positivos;

    printf("Digite seis valores: ");
    for (int i = 0; i < 6; i ++) {
        scanf("%f", &valores[i]);
    }

    media = mediaPositivos(valores, &positivos);
    printf("Tem %d valores positivos e a media entre eles eh %.2f", positivos, media);
    return 0;
}