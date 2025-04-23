#include <stdio.h>

int main(){
    char cidade[30];
    int populacao;
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade);
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Cidade -> %s", cidade);
    printf("\nPopulação -> %d\n", populacao);
    
    return 0;
}
