/*Usando as estruturas condicionais e de repetição (implemente
um menu), crie um programa de calculadora que lê operações e
valores do usuário e mostre o resultado na tela.
*/

#include <stdio.h>
float soma(float x, float y) {
    return x + y;
}

float subtracao(float x, float y) {
    return x - y;
}

float multiplicacao(float x, float y) {
    return x * y;
}

float divisao(float x, float y) {
    if (y != 0)
        return x / y;
    else {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

int main() {
    int escolha;
    float num1, num2, resultado;

    do {
        
        printf("\n--- Menu da Calculadora ---\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Sair\n");
        printf("----------------------------\n");
        scanf("%d", &escolha);

        if (escolha >= 1 && escolha <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);

            // Realiza a operação escolhida
            switch (escolha) {
                case 1:
                    resultado = soma(num1, num2);
                    printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
                    break;
                case 2:
                    resultado = subtracao(num1, num2);
                    printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
                    break;
                case 3:
                    resultado = multiplicacao(num1, num2);
                    printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
                    break;
                case 4:
                    resultado = divisao(num1, num2);
                    if (num2 != 0)
                        printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
                    break;
            }
        } else if (escolha != 5) {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (escolha != 5);  
    printf("Saindo da calculadora!\n");
    return 0;
}
