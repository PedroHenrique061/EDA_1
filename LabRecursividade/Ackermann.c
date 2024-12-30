#include <stdio.h>
#include <stdlib.h>

int AckermannRecursivo(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    if (m > 0 && n == 0)
    {
        return AckermannRecursivo(m - 1, 1);
    }
    if (m > 0 && n > 0)
    {
        return AckermannRecursivo(m - 1, AckermannRecursivo(m, n - 1));
    }

    return -1;
}

int main()
{
    int m, n;

    printf("Digite dois números inteiros positivos: ");
    if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0)
    {
        printf("Erro: Insira apenas números inteiros positivos.\n");
        return 1;
    }

    printf("O valor da função de Ackermann para m=%d e n=%d é %d\n", m, n, AckermannRecursivo(m, n));
    return 0;
}
