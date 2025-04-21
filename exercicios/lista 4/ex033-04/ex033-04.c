#include <stdio.h>

int main(){
    float preco, tot_gasto = 0; 

    for(int i = 1; i <= 10; i++){

        printf("Preço do %dº produto:  ", i);
        scanf("%f", &preco);

        tot_gasto += preco;
    }

    printf("Total gasto foi %.3f \n", tot_gasto);
}