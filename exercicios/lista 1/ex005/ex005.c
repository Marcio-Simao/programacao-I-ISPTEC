#include <stdio.h>

int main() {
    char cidade[50];  
    int populacao_atual;
    float taxa = 0.02; 

    printf("Nome da Cidade: ");
    scanf(" %s", cidade); 

    printf("População atual: ");
    scanf("%d", &populacao_atual);

    printf("\n========================================\n");
    printf(" PROJEÇÃO DE CRESCIMENTO POPULACIONAL \n");
    printf("========================================\n");
    printf("Cidade: %s\n", cidade);
    printf("População Atual: %d\n", populacao_atual);
    printf("Taxa de Crescimento: 2%% ao ano\n\n");

    for (int i = 1; i <= 5; i++) {
        populacao_atual += populacao_atual * taxa; 
        printf("Ano %d -> População estimada: %d\n", i, populacao_atual);
    }

    printf("========================================\n");

}