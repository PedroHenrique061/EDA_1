#include<stdio.h>

int main(){
    int idade;
    float altura;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Idade: %d\n Altura: %.2f", idade, altura);
    return 0;
}