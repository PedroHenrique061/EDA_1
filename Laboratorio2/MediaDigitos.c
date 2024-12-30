#include <stdio.h>
#include <stdlib.h>
/*Faça uma função recursiva chamada MediaDig que receba como argumento
 um número natural e devolva a média dos seus dígitos.*/
float MediaDig(int Numero, unsigned int Tamanho, float Soma)
{
    if (Numero == 0 && Tamanho > 0)
    {
        return Soma / Tamanho;
    }
    if (Numero == 0 && Tamanho == 0)
    {
        return 0.0;
    }

    Soma += Numero % 10;
    Tamanho++;

    return MediaDig(Numero / 10, Tamanho, Soma);
}

int main()
{
    printf("Media dos digitos: %.2f\n", MediaDig(1234, 0, 0));  
    printf("Media dos digitos: %.2f\n", MediaDig(12345, 0, 0)); 
    printf("Media dos digitos: %.2f\n", MediaDig(0, 0, 0));     
    return 0;
}
