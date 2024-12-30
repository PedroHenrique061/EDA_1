#include <stdio.h>
#include <stdlib.h>

/*Dado um vetor de números reais e o seu número de elementos,
 faça uma função recursiva que calcule a média dos elementos deste vetor.*/

int media(int vetor[], int tamanho)
{
    if (tamanho == 1)
    {
        return vetor[0];
    }
    return (vetor[tamanho - 1] + (media(vetor, tamanho - 1) * (tamanho - 1))) / tamanho;
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

    int resultado = media(vetor, tamanho);
    printf("A média dos valores do vetor é: %d", resultado);
}