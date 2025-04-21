#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho, tot = 0;
    
    //Cod para armazenar o valor da variavel *tamanho*
    printf("\n-----TAMANHO DO VETOR-----\n");
    printf("\nDigite o tamnho do vetor: ");
    scanf("%d", &tamanho);
    printf("\n--------------------------\n");
    //adicionando o valor da variavel *tamanho* aos vetores
    int *vetor = (int *) malloc( tamanho * (sizeof(int)));
    int *cont = (int *) malloc(tamanho * (sizeof(int)));

    printf("\n-----VALORES DO VETOR-----\n");
    //loop para armazenar os valores do vetor 
    for (int i = 0; i < tamanho; i++) 
    {
        printf("V[%d]", i);
        scanf("%d", &vetor[i]);        
    }
    printf("\n--------------------------\n");

    for(int i = 0; i < tamanho; i++){
        int dupli = 0; 
        if (cont[i] == 1) continue;        
        for(int l = i + 1; l < tamanho;l++){
            cont[l] = 0;
            if(vetor[i] == vetor[l]){
                dupli++;
                cont[l] = 1;
            }                
        }
        if (dupli > 0)
        {
            tot += dupli;
        }   
    }
    printf("Total de duplicados: %d\n", tot);
}