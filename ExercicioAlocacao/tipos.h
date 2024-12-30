#ifndef TIPOS_H
#define TIPOS_H

typedef struct
{
    char cidade[20];
    float *temperatura;
} TMedidas;

typedef struct
{
    int qtde_dias;    // Quantidade máxima de medidas
    int qtde_medidas; // Quantidade de medidas registradas
    TMedidas *medidas;
} TTemperaturas;

#endif
