#include <stdio.h>

int main() {

    float distancia, minutos;

    printf("Digite a distancia entre os dois carros (em km): ");
    scanf("%f", &distancia);

    minutos = (distancia / (60 + 90)) * 60;
    printf("Os carros se encontrarao em %.2f min", minutos);

    return 0;
}