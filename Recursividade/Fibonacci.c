//Escreva uma função recursiva para calcular o n-ésimo termo de Fibonacci.
#include<stdio.h>

long int fibonacci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 10;
    printf("O %d° termo de Fibonacci é: %ld\n", n, fibonacci(n));
    return 0;
}