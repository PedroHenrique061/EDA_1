#include <stdio.h>
#include <stdlib.h> // Para usar malloc
#include <locale.h>

char *Q3(int *M, char *NC) {
    char *code = (char*) malloc(9 * sizeof(char));
    for (int i = 0; i < 9; i++) {
        code[8-i] = NC[M[i]];
        if (code[8-i] == ' ') {
            code[8-i] = '#'; 
        }
    }
    return code;
}
// QUAL O RESULTADO RETORNADO PELA FUNCAO Q3 NO CAOS DE VOCE A INVOCAR PASSANDO O CONJUNTO DE PARAMETROS ABAIXO?
// VETOR CONTENDO OS DIGITOS DE SUA MATRICULA EX. 221031354 -> MATRICULA = [2,2,1,0,3,1,3,5,4]
// NC = SEU NOME COMPLETO EM LETRAS MINUSCULAS
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int m[] = {2,2,1,0,3,1,3,5,4};
    char nc[] = "pedro henrique fernandino da silva";
    char *result = Q3(m, nc);
    printf("Resultado: %s\n", result);
    free(result); 
    return 0;
}
