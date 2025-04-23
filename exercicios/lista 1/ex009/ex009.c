#include <stdio.h>

int main() {
    int numero_inteiro;
    float numero_real;
    char caractere;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero_inteiro);

    printf("Digite um número real: ");
    scanf("%f", &numero_real);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); 

    printf("\n========================================\n");
    printf("           VALORES DIGITADOS            \n");
    printf("========================================\n");
    printf("Número inteiro: %d\n", numero_inteiro);
    printf("Número real: %.2f\n", numero_real);
    printf("Caractere: %c\n", caractere);
    printf("========================================\n");

}