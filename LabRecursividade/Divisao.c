#include <stdio.h>

int divisao (int m, int n)
{
    if (n == 0)
    {
        printf("Divisão inválida!");
        exit(1);
    }
    if (m < n)
    {
        return 0;
    }

    return 1 + divisao(m - n, n);
}

int main()
{
    int m, n;
    printf("Digite os valores de m e n: ");
    scanf("%d %d", &m, &n);

    printf("O resultado da divisão entre %d e %d é: %d", m, n, divisao(m, n));
    return 0;
}