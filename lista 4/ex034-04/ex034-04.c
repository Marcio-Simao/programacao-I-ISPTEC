#include <stdio.h>

int main(){

    int consumo, tot_consumo = 0;
    
    for (int i = 1; i < 3; i++)
    { 
        printf("\n-----END-----\n");
        printf("COSUMO: ");
        scanf("%d", &consumo);

        if(consumo >= 0 && consumo <= 100)
        {
            printf("%dº RESIDÊNCIA", i);
            printf("\nVALOR A SER PAGO: %dKz\n", consumo * 10);
        }else
        {
            if(consumo >= 101 && consumo <= 200)
            {
                printf("%dº RESIDÊNCIA", i);
                printf("\nVALOR A PAGAR: %dKz\n", consumo * 15);
            }else
            {
                printf("%dº RESIDÊNCIA", i);
                printf("\nVALOR A SER PAGO: %dKz\n", consumo * 20);
            }
        }
        tot_consumo += consumo;
    }

    if (tot_consumo <= 1000)
    {
        printf("\n--------------------------\n");
        printf("O total de consumo é %d\n", tot_consumo);
        printf("NÍVEL DE CONSUMO ACEITAVEL!\n");   
    }else{
        printf("\n--------------------------\n");
        printf("O total de consumo é %d\n", tot_consumo);
        printf("NÍVEL DE CONSUMO EXCESSIVO!\n");
    }
}