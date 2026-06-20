#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

int main() {
    int n;

    printf("Quantos produtos serao cadastrados? ");
    scanf("%d", &n);

    Produto *produtos = malloc(n * sizeof(Produto));
    if (produtos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    cadastrarProdutos(produtos, n);
    listarProdutos(produtos, n);

    int categEscolhida;
    printf("\nQual categoria deseja listar?\n");
    printf("0 - ALIMENTO\n");
    printf("1 - BEBIDA\n");
    printf("2 - LIMPEZA\n");
    printf("Escolha: ");
    scanf("%d", &categEscolhida);

    listarProdutosCategoria(produtos, n, (Categoria) categEscolhida);

    float total = valorTotal(produtos, n);
    printf("\n\nO valor total da compra foi RS%.2f", total);

    free(produtos);

    return 0;
}