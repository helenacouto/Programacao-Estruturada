#include <stdio.h>
#include "produto.h"

void cadastrarProdutos(Produto *produtos, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\n==== PRODUTO %d ====\n", i + 1);

        printf("Codigo: ");
        scanf("%s", produtos[i].codigo);

        printf("Nome: ");
        scanf("%s", produtos[i].nome);

        printf("Categoria (0-ALIMENTO, 1-BEBIDA ou 2-LIMPEZA): ");
        scanf("%d", &produtos[i].categoria);

        printf("Preco: RS");
        scanf("%f", &produtos[i].preco);
    }
}

void listarProdutos(Produto *produtos, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\n\n====PRODUTO %d====\n", i + 1);

        printf("Codigo: %s\n", produtos[i].codigo);

        printf("Nome: %s\n", produtos[i].nome);
        
        switch (produtos[i].categoria) {
            case ALIMENTO:
                printf("Categoria: ALIMENTO\n");
                break;
            case BEBIDA:
                printf("Categoria: BEBIDA\n");
                break;
            case LIMPEZA:
                printf("Categoria: LIMPEZA\n");
                break;
        }

        printf("Preco: RS%.2f\n", produtos[i].preco);
    }
}

void listarProdutosCategoria(Produto *produtos, int n, Categoria categEscolhida) {
    int i, encontrou = 0;

    printf("\n\n==== PRODUTOS DA CATEGORIA ====\n");

    for (i = 0; i < n; i++) {
        if (categEscolhida == produtos[i].categoria) {
            printf("Codigo: %s\n", produtos[i].codigo);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Preco: %.2f\n", produtos[i].preco);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum produto encontrado nessa categoria.\n");
    }
}

float valorTotal(Produto *produtos, int n) {
    float soma = 0;

    int i;
    for (i = 0; i < n; i++) {
        soma += produtos[i].preco;    
    }
    
    return soma;
}