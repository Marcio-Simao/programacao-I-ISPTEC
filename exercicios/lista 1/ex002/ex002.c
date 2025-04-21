#include <stdio.h>

int main(){
    char cidade[30];
    int populacao;
    float temp;
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade);
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Temperatura média anual (°C): ");
    scanf("%f", &temp);

    printf("\nCidade -> %s", cidade);
    printf("\nPopulação -> %d", populacao);
    printf("\nTemperatura Média Anual -> %.2f°C\n", temp);
    
    return 0;
}