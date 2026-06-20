#ifndef PRODUTO_H
#define PRODUTO_H

typedef enum {
    ALIMENTO,
    BEBIDA,
    LIMPEZA
} Categoria;

typedef struct {
    char codigo[30];
    char nome[30];
    Categoria categoria;
    float preco;
} Produto;

void cadastrarProdutos(Produto *produtos, int n);
void listarProdutos(Produto *produtos, int n);
void listarProdutosCategoria(Produto *produtos, int n, Categoria categEscolhida);
float valorTotal(Produto *produtos, int n);

#endif