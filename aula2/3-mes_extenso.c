#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato DD/MM/AAAA abaixo:\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    switch(mes) {
        case 1:
        printf("Extenso: %d de janeiro de %d", dia, ano);
        break;

        case 2:
        printf("Extenso: %d de fevereiro de %d", dia, ano);
        break;

        case 3:
        printf("Extenso: %d de marco de %d", dia, ano);
        break;

        case 4:
        printf("Extenso: %d de abril de %d", dia, ano);
        break;

        case 5:
        printf("Extenso: %d de maio de %d", dia, ano);
        break;

        case 6:
        printf("Extenso: %d de junho de %d", dia, ano);
        break;

        case 7:
        printf("Extenso: %d de julho de %d", dia, ano);
        break;

        case 8:
        printf("Extenso: %d de agosto de %d", dia, ano);
        break;

        case 9:
        printf("Extenso: %d de setembro de %d", dia, ano);
        break;

        case 10:
        printf("Extenso: %d de outubro de %d", dia, ano);
        break;

        case 11:
        printf("Extenso: %d de novembro de %d", dia, ano);
        break;

        case 12:
        printf("Extenso: %d de dezembro de %d", dia, ano);
        break;
    }

    return 0;
}