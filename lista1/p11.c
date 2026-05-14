#include <stdio.h>

int main() {

    int num1, num2, numMaior;
    int i, soma = 0;

    printf("Informe dois numeros inteiros separados por espaco:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        numMaior = num1;
        num1 = num2;
        num2 = numMaior;
    }

    for (i = (num1 + 1); i < num2; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    printf("\nSoma dos numeros impares entre eles: %d", soma);

    return 0;
}