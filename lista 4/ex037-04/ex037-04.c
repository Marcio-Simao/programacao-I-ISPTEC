#include <stdio.h>

int main(){

    int receita;
    float imposto; 

    printf("\n----- A G T -----\n");
    printf("\nRECEITA: \n");
    scanf("%d", &receita);

    if(receita < 500000){

        imposto = (receita * 5)/100;
    } else
    {
        if (receita >= 500000 && receita <= 100000)
        {
            imposto = (receita * 10)/100;
        } else
        {
            if (receita > 100000)
            {
                imposto = (receita * 15)/100;
            }
            
        }
    }
    printf("\nIMPOSTO A SER PAGO: %.2f\n", imposto);
}