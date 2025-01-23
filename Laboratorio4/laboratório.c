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
    if (novo_no == NULL)
    {
        printf("Erro de alocação de memória.\n");
        return pilha;
    }

    // Inicializa o nó
    novo_no->caracter = x;
    novo_no->proximo = pilha;

    // Retorna o novo topo da pilha
    return novo_no;
}

No *Desempilha(No *pilha)
{
    if (pilha == NULL)
    {
        // A pilha já está vazia
        return NULL;
    }

    // Ponteiro para o nó que será removido
    No *removido = pilha;

    // Atualiza o topo da pilha para o próximo elemento
    pilha = pilha->proximo;

    // Libera a memória do nó removido
    free(removido);

    // Retorna o novo topo da pilha
    return pilha;
}

int identifica_formacao(char x[])
{
    No *pilha = NULL; // Inicializa a pilha como vazia
    int i = 0;

    while (x[i] != '\0')
    { // Percorre a expressão até o final
        char atual = x[i];

        // Verifica se o caractere é um delimitador de abertura
        if (atual == '(' || atual == '{' || atual == '[')
        {
            pilha = Empilha(pilha, atual); // Empilha o delimitador de abertura
        }
        // Verifica se o caractere é um delimitador de fechamento
        else if (atual == ')' || atual == '}' || atual == ']')
        {
            // Se a pilha estiver vazia, significa que há um delimitador de fechamento desbalanceado
            if (pilha == NULL)
            {
                return 0;
            }

            // Verifica o topo da pilha para conferir o casamento
            char topo = pilha->caracter;
            if (!forma_par(atual, topo))
            {
                return 0; // Fechamento não corresponde ao último delimitador aberto
            }

            // Desempilha o delimitador correspondido
            pilha = Desempilha(pilha);
        }

        i++; // Avança para o próximo caractere da expressão
    }

    // Após o loop, se a pilha não estiver vazia, há delimitadores de abertura desbalanceados
    if (pilha != NULL)
    {
        return 0;
    }

    // Todos os delimitadores estão balanceados
    return 1;
}
