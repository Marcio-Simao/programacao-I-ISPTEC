#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("\n========================================\n");
    printf("           OPERAÇÕES MATEMÁTICAS        \n");
    printf("========================================\n");
    printf("Soma: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtração: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicação: %d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("Divisão inteira: %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Resto da divisão: %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Divisão por zero não é permitida!\n");
    }

    printf("========================================\n");
}