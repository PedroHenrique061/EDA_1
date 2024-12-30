#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipos.h"

// Função para resetar o sistema
void reset(TTemperaturas *t)
{
    printf("Digite a quantidade de dias para registrar temperaturas: ");
    scanf("%d", &t->qtde_dias);

    // Desaloca caso já exista memória alocada
    if (t->medidas != NULL)
    {
        for (int i = 0; i < t->qtde_medidas; i++)
        {
            free(t->medidas[i].temperatura);
        }
        free(t->medidas);
    }

    t->medidas = (TMedidas *)malloc(t->qtde_dias * sizeof(TMedidas));
    t->qtde_medidas = 0;

    printf("Memória alocada para %d dias.\n", t->qtde_dias);
}

// Função para inserir uma medida
void inserirMedida(TTemperaturas *t)
{
    if (t->qtde_medidas >= t->qtde_dias)
    {
        printf("Limite de medidas atingido!\n");
        return;
    }

    TMedidas novaMedida;
    printf("Digite o nome da cidade: ");
    scanf("%s", novaMedida.cidade);

    novaMedida.temperatura = (float *)malloc(sizeof(float));
    printf("Digite a temperatura: ");
    scanf("%f", novaMedida.temperatura);

    t->medidas[t->qtde_medidas] = novaMedida;
    t->qtde_medidas++;

    printf("Medida registrada com sucesso!\n");
}

// Função para calcular estatísticas
void estatisticas(TTemperaturas *t)
{
    if (t->qtde_medidas == 0)
    {
        printf("Nenhuma medida registrada.\n");
        return;
    }

    float media = 0, min, max;
    char cidadeMin[20], cidadeMax[20];

    media = calcularMedia(t);
    calcularExtremos(t, &min, cidadeMin, &max, cidadeMax);

    printf("\nEstatísticas:\n");
    printf("Temperatura Média: %.2f\n", media);
    printf("Menor Temperatura: %.2f (%s)\n", min, cidadeMin);
    printf("Maior Temperatura: %.2f (%s)\n", max, cidadeMax);
}

// Função para desalocar memória e encerrar o programa
void sair(TTemperaturas *t)
{
    for (int i = 0; i < t->qtde_medidas; i++)
    {
        free(t->medidas[i].temperatura);
    }
    free(t->medidas);
    printf("Memória desalocada. Programa encerrado.\n");
}

// Função para calcular a temperatura média (alterada para usar if-else)
float calcularMedia(TTemperaturas *t)
{
    float soma = 0;
    for (int i = 0; i < t->qtde_medidas; i++)
    {
        soma += *(t->medidas[i].temperatura);
    }

    if (t->qtde_medidas > 0)
    {
        return soma / t->qtde_medidas; // Retorna a média
    }
    else
    {
        return 0; // Retorna 0 se não houver medidas
    }
}

// Função para encontrar a menor e maior temperatura
void calcularExtremos(TTemperaturas *t, float *min, char *cidadeMin, float *max, char *cidadeMax)
{
    *min = *max = *(t->medidas[0].temperatura);
    strcpy(cidadeMin, t->medidas[0].cidade);
    strcpy(cidadeMax, t->medidas[0].cidade);

    for (int i = 1; i < t->qtde_medidas; i++)
    {
        float temp = *(t->medidas[i].temperatura);
        if (temp < *min)
        {
            *min = temp;
            strcpy(cidadeMin, t->medidas[i].cidade);
        }
        if (temp > *max)
        {
            *max = temp;
            strcpy(cidadeMax, t->medidas[i].cidade);
        }
    }
}

int main()
{
    TTemperaturas temperaturas = {0, 0, NULL};
    int opcao;

    do
    {
        printf("\nMenu:\n");
        printf("1. Reset\n");
        printf("2. Inserir Medida\n");
        printf("3. Estatística\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            reset(&temperaturas);
            break;
        case 2:
            inserirMedida(&temperaturas);
            break;
        case 3:
            estatisticas(&temperaturas);
            break;
        case 4:
            sair(&temperaturas);
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (opcao != 4);

    return 0;
}
