#include <stdio.h>

int main() {
    float valor;
    float desconto;
    
    printf("Digite o valor do salario bruto: \n");
    scanf("%f", &valor);

    if (valor <= 420) {
        desconto = valor * 0.08;
        valor -= desconto;
        printf("Valor do desconto do INSS: R$%.2f\n", desconto);
        printf("Salario liquido: R$%.2f", valor);
    } else if (valor <= 1350) {
        desconto = valor * 0.09;
        valor -= desconto;
        printf("Valor do desconto do INSS: R$%.2f\n", desconto);
        printf("Salario liquido: R$%.2f", valor);
    } else {
        desconto = valor * 0.10;
        valor -= desconto;
        printf("Valor do desconto do INSS: R$%.2f\n", desconto);
        printf("Salario liquido: R$%.2f", valor);
    }

    return 0;
}