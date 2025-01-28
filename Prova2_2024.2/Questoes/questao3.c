#include <stdio.h>
#include <stdlib.h>

int Q3(char *Nome, int tamanho, int matricula)
{
    int inicio = 0, meio, fim = tamanho - 1, pcont = 0;
    char chave = Nome[matricula % 10];
    while (inicio <= fim)
    {
        pcont++;
        meio = (inicio + fim) / 2;
        if (chave == Nome[meio])
            break;
        else if (chave < Nome[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }
    return pcont;
}
int main()
{
    // Testando com um exemplo
    char Nome[] = "    pedrohenriquefernandinodasilva";
    int matricula = 221031354;

    // Chama a função Q3
    int resultado = Q3(Nome, sizeof(Nome) - 1, matricula);

    // Exibe o resultado
    printf("Número de iterações: %d\n", resultado);

    return 0;
}