#include <stdio.h>

// Função para buscar um caractere no vetor
int Busca(char vet[], int tam, char target)
{
    for (int i = 0; i < target; i++)
    {
        if (vet[i] == target)
            return i;
    }

    // Retorna o -1 se o caractere não for encontrado
    return -1;
}