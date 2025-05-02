#include <stdio.h>

int main() {
    char letra;
    int num1, num2;

    printf("Digite a letra (B ou P): ");
    scanf(" %c", &letra);

    if (letra == 'B') {
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        if (num1 == 1) {
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            if (num2 == 7) {
                printf("Variante identificada: ALFA do Reino Unido\n");
            } else if (num2 == 357) {
                printf("Variante identificada: BETA da África do Sul\n");
            } else if (num2 == 617) {
                printf("Digite o terceiro número: ");
                scanf("%d", &num2);
                if (num2 == 1 || num2 == 2 || num2 == 3) {
                    printf("Variante identificada: DELTA Indiana\n");
                } else {
                    printf("valor inválido\n");
                }
            } else {
                printf("valor inválido\n");
            }
        } else {
            printf("valor inválido\n");
        }
    } else if (letra == 'P') {
        printf("Digite o número: ");
        scanf("%d", &num1);
        if (num1 == 1) {
            printf("Variante identificada: GAMA brasileira\n");
        } else {
            printf("valor inválido\n");
        }
    } else {
        printf("valor inválido\n");
    }

    return 0;
}
