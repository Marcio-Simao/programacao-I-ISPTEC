#include <stdio.h>

int main(){
    int andar; 

    printf("\nDigite a quantidade de andares: \n");
    scanf("%d", &andar);

    if (andar <= 3)
    {
        printf("\nEdifício de Baixo Impacto\n");    
    } else
    {
        if(andar >= 4 && andar < 10)
        {
            printf("\nEdifício de Médio Impacto\n");    
        }
        else
        {
            printf("\nEdifício de Alto Impacto\n");    
        }
    }
}