#include <stdio.h>

int Q5(char vetor[], int tamanho){
    int trocas = 0, j , i;
    char chave;
    for (i = 1; i < tamanho; i++)
    {
        chave = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > chave)
        {    
            vetor[j + 1] = vetor[j];
            j--;
            trocas++;
        }
        vetor[j + 1]= chave;
    }
    return trocas;
}

// Qual o valor de R?
// Qual o valor de nome?

int main(){
    char nc[] = "silva";
    int res = Q5(nc, 5); // last nome, qtd de letras last nome;
    printf("\n\nresposta = %d\n\nnc = %s\n\n", res, nc);
    return 0;
}