#include <stdio.h>

int main() {
    
    int distancia;
    float combustivel, consumoMedio;

    printf("Digite a distancia percorrida (em km): ");
    scanf("%d", &distancia);
    printf("Digite o combustivel gasto (em L): ");
    scanf("%f", &combustivel);

    consumoMedio = distancia/combustivel;
    printf("Consumo médio: %.3f km/l", consumoMedio);

    return 0;
}