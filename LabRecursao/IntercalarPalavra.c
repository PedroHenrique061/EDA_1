#include <stdio.h>
#include <string.h>
/*Faça uma função recursiva para intercalar duas palavras V1 e V2 e colocar o resultado em V3. 
Considere que V3 já está alocado com espaço suficiente para receber os caracteres de V1 e V2.*/
void IntercalaVetores(char *V1, char *V2, char *V3)
{
    if (*V1 == '\0' && *V2 == '\0')
    {
        *V3 = '\0';
        return;
    }

    if (*V1 != '\0')
    {
        *V3 = *V1;
        IntercalaVetores(V2, V1 + 1, V3 + 1);
    }

    else if (*V2 != '\0')
    {
        *V3 = *V2;
        IntercalaVetores(V1, V2 + 1, V3 + 1);
    }
}

int main()
{
    char V1[] = "abc", V2[] = "ABCDE";
    char V3[sizeof(V1) + sizeof(V2) - 1];

    IntercalaVetores(V1, V2, V3);
    printf("Intercalacao: %s\n", V3);
    return 0;
}
