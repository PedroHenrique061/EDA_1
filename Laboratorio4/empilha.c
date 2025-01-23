#include <stdio.h>

// Tipo pilha
typedef struct no
{
    char caracter;
    struct no *proximo;
} No;

// Função Main
int main()
{
    char exp[50];
    int retorno;
    scanf("%49[^\n]", exp);
    retorno = identifica_formacao(exp);
    if (retorno == 1)
        printf("BALANCEADA\n");
    else
        printf("DESBALANCEADA\n");
    return 0;
}

No *Empilha(No *pilha, char x)
{
    // Cria um novo nó
    No *novo_no = (No *)malloc(sizeof(No));
    if (novo_no == NULL) {
        printf("Erro de alocação de memória.\n");
        return pilha;
    }
    
    // Inicializa o nó
    novo_no->caracter = x;
    novo_no->proximo = pilha;
    
    // Retorna o novo topo da pilha
    return novo_no;
}

No *Desempilha(No *pilha){
    
}