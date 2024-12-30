#include <stdio.h>

int main()
{
    int numero = 79417;
    int *ptr; // Declaração de um ponteiro para inteiro;

    // Atribuição do endereço de 'numero' ao ponteiro ptr
    ptr = &numero;

    /*
    Impressão do endereço de 'número'
    e seu valor usando o ponteiro
    */
    printf("Endereço de 'número': %p\n", ptr);
    printf("Valor de 'número': %d\n", *ptr);

    return 0;
}
