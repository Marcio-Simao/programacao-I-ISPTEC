#include <stdio.h>

int main(){

    int num_veiculos;

    printf("Digite o número de veículos estacionados: ");
    scanf("%d", &num_veiculos);

    if(num_veiculos < 100){

        printf("\nHá vagas disponíveis!\n");

    } else
    {
        printf("\nEstacionamento lotado!\n");
    }
}
