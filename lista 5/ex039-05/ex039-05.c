#include <stdio.h>
#include<stdlib.h>

int main()
{
    int tamanho; 

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int *vetor1 = (int *) malloc(tamanho * sizeof(int));
    int *vetor2 = (int *) malloc(tamanho * sizeof(int));
    int *vetor3 = (int *) malloc(tamanho * sizeof(int));

    for(int i = 0; i <= tamanho - 1; i++ ){
        printf("\nVETOR 1\n");
        printf("Digite o valor do Vetor[%d]: \n", i);
        scanf("%d", &vetor1[i]);
    }
    
    for(int i = 0; i <= tamanho - 1; i++){
        printf("\nVETOR 2\n");
        printf("Valor do Vetor[%d]: \n", i);
        scanf("%d", &vetor2[i]);        
    }

    for(int i = 0; i <= tamanho - 1; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
        printf("\nVETOR 3\n");
        printf("vetor[%d] =  %d\n", i, vetor3[i]); 
    }

    return 0;
}
