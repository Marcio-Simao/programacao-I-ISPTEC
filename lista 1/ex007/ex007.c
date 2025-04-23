#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor booleano (0 ou 1): ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor booleano (0 ou 1): ");
    scanf("%d", &valor2);

    printf("\n========================================\n");
    printf("           OPERAÇÕES BOOLEANAS          \n");
    printf("========================================\n");
    printf("AND  ( %d && %d ) = %d\n", valor1, valor2, valor1 && valor2);
    printf("OR   ( %d || %d ) = %d\n", valor1, valor2, valor1 || valor2);
    printf("NOT  ( !%d ) = %d\n", valor1, !valor1);
    printf("NOT  ( !%d ) = %d\n", valor2, !valor2);
    printf("========================================\n");

    return 0;
}