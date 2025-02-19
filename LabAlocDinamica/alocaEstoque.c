#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipos.h"

/*R1. Ler do usuário a quantidade máxima de produtos (QMP) no estoque.
R2. Configurar a estrutura de dados do estoque (Estoque) adequadamente.
Veja que o parâmetro pEstoque é um parâmetro por referência. */

void alocaEstoque(TEstoque *pEstoque)
{
    scanf("%d", &pEstoque->qtdeProdutos);
    pEstoque->produtos = (TProduto *)malloc(pEstoque->qtdeProdutos * sizeof(TProduto));
}

/*Requisitos da função incluirProdutos:
R1. Ler do usuário os detalhes (Código, Quantidade e Preço) de todos os produtos conforme o tamanho do vetor de produtos.
Veja que o parâmetro pEstoque é um parâmetro por referência. */

void incluirProdutos(TEstoque *pEstoque)
{
    for (int i = 0; i < pEstoque->qtdeProdutos; i++)
    {
        scanf("%d %d %f", &pEstoque->produtos[i].id, &pEstoque->produtos[i].quantidade, &pEstoque->produtos[i].preco);
    }
}

/*R1. Mostrar na tela a os detalhes (Código, Quantidade e Preço) de todos os produtos conforme o tamanho do vetor de produtos.
R2. Utilize o seguinte formato de saída de dados: printf("ID: %d, Qt:%d, Preço: %.2f\n", pID, pQ, pP),
onde pID, pQ e pP são o código, a quantidade e o preço de um produto.
 */

void listarProdutos(TEstoque *pEstoque)
{
    for (int i = 0; i < pEstoque->qtdeProdutos; i++)
    {
        printf("ID: %d, Qt:%d, Preço: %.2f\n", pEstoque->produtos[i].id, pEstoque->produtos[i].quantidade, pEstoque->produtos[i].preco);
    }
}

/*R1. Desalocar a memória que foi alocada dinamicamente.
R2. Reconfigurar adequadamente os campos da variável Estoque.
Veja que o parâmetro pEstoque é um parâmetro por referência. */

void desalocaEstoque(TEstoque *pEstoque)
{
    free(pEstoque->produtos);

    pEstoque->produtos = NULL;
    pEstoque->qtdeProdutos = 0;
}

int main()
{
    TEstoque Estoque;
    alocaEstoque(&Estoque);
    incluirProdutos(&Estoque);
    listarProdutos(&Estoque);
    desalocaEstoque(&Estoque);
    return 0;
}