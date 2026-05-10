#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media < 4) {
        printf("E: REPROVADO");
    } else if (media < 6) {
        printf("D: REPROVADO");
    } else if (media < 7.5) {
        printf("C: APROVADO");
    } else if (media < 9) {
        printf("B: APROVADO");
    } else {
        printf("A: APROVADO");
    }

    return 0;
}