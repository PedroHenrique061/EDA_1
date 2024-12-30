#include <stdio.h>
int main()
{
    int escolha;
    printf(" Menu de Opcões : \n ");
    printf(" 1. Opção 1\n ");
    printf(" 2. Opção 2\n ");
    printf(" Escolha uma Opção : ");
    scanf(" % d ", &escolha);
    switch (escolha)
    {
    case 1:
        printf(" Voce escolheu 1.\n ");
        break;
    case 2:
        printf(" Voce escolheu 2.\n ");
        break;
    default:
        printf(" Opção inválida!\n ");
    }
    return 0;
}