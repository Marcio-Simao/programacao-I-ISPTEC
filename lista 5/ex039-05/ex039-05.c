#include <stdio.h>
#include<stdlib.h>

int main()
{
    int tamanho; 
    //pedindo o tamanho do vetor no usuaria 
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    //adicionado o valor como tamanho do vetor
    int *vetor1 = (int *) malloc(tamanho * sizeof(int));
    int *vetor2 = (int *) malloc(tamanho * sizeof(int));
    int *vetor3 = (int *) malloc(tamanho * sizeof(int));
    //loop add os valor do vetor 1
    for(int i = 0; i <= tamanho - 1; i++ ){
        printf("\nVETOR 1\n");
        printf("Digite o valor do Vetor[%d]: \n", i);
        scanf("%d", &vetor1[i]);
    }
    //loop add os valor do vetor 2
    for(int i = 0; i <= tamanho - 1; i++){
        printf("\nVETOR 2\n");
        printf("Valor do Vetor[%d]: \n", i);
        scanf("%d", &vetor2[i]);        
    }
    //somando, adicionando e apresentando o vetor 3
    for(int i = 0; i <= tamanho - 1; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
        printf("\nVETOR 3\n");
        printf("vetor[%d] =  %d\n", i, vetor3[i]); 
    }

    return 0;
}
