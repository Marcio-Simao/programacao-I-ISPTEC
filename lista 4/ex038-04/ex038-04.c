#include <stdio.h>
#include <string.h>

int main(){
    int quant_prod_vend, preco_prod;
    int vend_tot = 0, mais_vend = 0;
    char nome_prod[60], nome_mais_vend[60];

    for (int i = 1; i <= 3; i++)
    {
        printf("\n---SUPER MERCADO---\n");
        printf("\nPRODUTO: ");
        scanf("%s", nome_prod);

        printf("\nPREÇO: ");
        scanf("%d", &preco_prod);

        printf("\nQUANTIDADE VENDIDA: ");
        scanf("%d", &quant_prod_vend);

        vend_tot += (preco_prod * quant_prod_vend);

        if (quant_prod_vend >= mais_vend)
        {
            strncpy(nome_mais_vend, nome_prod, sizeof(nome_mais_vend));
            nome_mais_vend[sizeof(nome_mais_vend) - 1] = '\0';

            mais_vend = quant_prod_vend;
        }
        
    }

    printf("\n--------------------------\n");
    printf("PRODUTO MAIS VENDIDO: %s", nome_mais_vend);
    printf("\n--------------------------\n");
    printf("TOTAL DAS VENDAS: %d\n", vend_tot);    
    
}