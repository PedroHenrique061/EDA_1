// Escreva uma função recursiva que retorne a soma dos elementos de um vetor:
// long int somavet(int *a, int qtde);
#include <stdio.h>
#include <stdlib.h>

long int somavet(int *a, int qtde)
{
    if (qtde == 0)
    {
        return 0; // Caso base: vetor vazio, soma é 0
    }
    return a[qtde - 1] + somavet(a, qtde - 1); // Soma o último elemento com o resto
}

int main()
{
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0)
    {
        printf("O tamanho do vetor deve ser maior que 0.\n");
        return 1;
    }

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    long int soma = somavet(vetor, tamanho);
    printf("Soma dos elementos do vetor: %ld\n", soma);

    free(vetor);
    return 0;
}
