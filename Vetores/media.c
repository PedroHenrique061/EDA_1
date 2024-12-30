// Cálculo e impressão das médias das turmas

int main()
{

    printf("\nMedias das Turmas:\n");
    for (int t = 0; t < 5; t++)
    {
        soma = 0.0;
        for (int a = 0; a < 80; a++)
        {
            for (int n = 0; n < 3; n++)
            {
                soma += Notas[t][a][n];
            }
        }
        media = soma / (80 * 3);
        printf("Media da Turma %d: %.2f\n", t + 1, media);
    }
    return 0;
}