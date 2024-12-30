#include <stdio.h>
int main()
{
    int numero, *ptr;
    numero = 79417;
    ptr = &numero;
    printf("%d\n", numero);
    *ptr = 90560; // A parte de valor do ponteiro, seta um valor específco na memória;
    printf("%d\n", numero);
    return 0;
}
