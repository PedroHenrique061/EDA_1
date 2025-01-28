#include<stdio.h>
#include<stdlib.h>

char LetraCorrespondente(int P)
{
    P = P % 26;
    return 'a' + P;
}

int q2(char *NomeCompleto, int matricula)
{
    int p = 0, pvez = 0;
    char chave = LetraCorrespondente(matricula % 100);
    while (NomeCompleto[p] != '\0')
    {
        if (chave == NomeCompleto[p])
            pvez++;
        p++;
    }
    return pvez;
}
int main()
{
    // Variáveis
    char NomeCompleto[100] = "pedro henrique fernandino da silva";
    int matricula = 221031354;

    // Exibir as informações de entrada
    printf("Nome completo: %s\n", NomeCompleto);
    printf("Matrícula: %d\n", matricula);

    // Chamar a função q2
    int resultado = q2(NomeCompleto, matricula);

    // Exibir o resultado
    if (resultado == -1)
    {
        printf("O caractere correspondente à chave não foi encontrado no nome completo.\n");
    }
    else
    {
        printf("O caractere correspondente à chave foi encontrado na posição: %d\n", resultado);
    }

    return 0;
}