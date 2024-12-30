#include <stdio.h>
int main()
{
    // Matriz[Turmas][Alunos][Notas]
    float Notas[5][80][3],
        media, soma;
    for (int t = 0; t < 5; t++)
    {
        printf("Digite as notas da turma %d:\n", t + 1);
        for (int a = 0; a < 80; a++)
        {
            printf("Aluno %d, Turma %d:\n", a + 1, t + 1);
            for (int n = 0; n < 3; n++)
            {
                printf("Nota %d: ", n + 1);
                scanf("%f", &Notas[t][a][n]);
            }
        }
    }
}
