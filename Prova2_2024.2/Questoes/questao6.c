#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da pilha
typedef struct no {
    char caracter;
    struct no *proximo;
} No;

// Função para verificar se dois caracteres formam um par válido
int forma_par(char f, char d) {
    if ((d == '(' && f == ')') || (d == '[' && f == ']') || (d == '{' && f == '}')) {
        return 1;
    }
    return 0;
}

// Função para empilhar um caractere na pilha
No* Empilha(No *pilha, char x) {
    No *novo = (No*) malloc(sizeof(No));
    if (novo) {
        novo->caracter = x;
        novo->proximo = pilha;
        return novo;
    } else {
        printf("Erro ao alocar memória!\n");
        return NULL;
    }
}

// Função para desempilhar um caractere da pilha
No* Desempilha(No *pilha) {
    if (pilha) {
        No *temp = pilha;
        pilha = pilha->proximo;
        free(temp);
    }
    return pilha;
}

// Função para identificar se a expressão é bem formada
int identifica_formacao(char x[]) {
    No *pilha = NULL;
    int i = 0;
    while (x[i] != '\0') {
        if (x[i] == '(' || x[i] == '[' || x[i] == '{') {
            A//pilha = Empilha(pilha, x[i]);
        } else if (x[i] == ')' || x[i] == ']' || x[i] == '}') {
            if (pilha == NULL) {
                return 0;
            }
            B//if (!forma_par(x[i], pilha->caracter)) 
            {
                return 0;
            }
            C //pilha = Desempilha(pilha);
        }
        i++;
    }
    D //if (pilha == NULL) 
    {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char expressao[100];
    printf("Digite a expressão: ");
    scanf("%s", expressao);
    if (identifica_formacao(expressao)) {
        printf("A expressão é bem formada.\n");
    } else {
        printf("A expressão não é bem formada.\n");
    }
    return 0;
}