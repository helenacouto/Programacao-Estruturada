#include <stdio.h>
#include <stdbool.h>

int main() {
    int opcao;
    bool ativo = true;
    float raio, base_maior, base_menor, altura, area;

    while (ativo) {
        printf("**** Menu ****\n"
            "1 : Calcular a area de um circulo\n"
            "2 : Calcular a area de um quadrado\n"
            "3 : Calcular a area de um retangulo\n"
            "4 : Calcular a area de um trapezio\n"
            "5 : Encerrar\n"
            "Qual a sua escolha?\n");
        
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
            printf("Digite o raio do circulo (em m):\n");
            scanf("%f", &raio);

            area = 3.14 * raio * raio;
            printf("A area do circulo eh %.2fm\n", area);
            break;

            case 2:
            printf("Digite o comprimento do lado quadrado (em m):\n");
            scanf("%f", &base_maior);

            area = base_maior * base_maior;
            printf("A area do quadrado eh %.2fm\n", area);
            break;

            case 3:
            printf("Digite a largura do retangulo (em m):\n");
            scanf("%f", &base_maior);
            printf("Digite a altura do retangulo (em m):\n");
            scanf("%f", &altura);

            area = base_maior * altura;
            printf("A area do retangulo eh %.2fm\n", area);
            break;

            case 4:
            printf("Digite a base maior do trapezio (em m):\n");
            scanf("%f", &base_maior);
            printf("Digite a base menhor do trapezio (em m):\n");
            scanf("%f", &base_menor);
            printf("Digite a altura base maior do trapezio (em m):\n");
            scanf("%f", &altura);

            area = (base_maior + base_menor) * altura / 2;
            printf("A area do trapezio eh %.2fm\n", area);
            break;

            case 5:
            ativo = false;
            break;
        }
    }

    return 0;
}