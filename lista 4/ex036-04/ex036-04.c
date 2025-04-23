#include <stdio.h>
#include <string.h>

int main(){
    float preco_produto, preco_total = 0, preco_produto_caro = 0;
    char nome_produto[51], nome_produto_caro[60];

    for (int i = 1; i <= 3; i++) {

        printf("\nNA CANTINA DO DIALO\n");
        
        printf("\n%dº PRODUTO: ", i);
        scanf(" %[^\n]", nome_produto);

        printf("\nPREÇO: ");
        scanf("%f", &preco_produto);

        preco_total += preco_produto;

        if (preco_produto > preco_produto_caro )
        {
            preco_produto_caro = preco_produto;
            strncpy(nome_produto_caro, nome_produto, sizeof(nome_produto_caro));
            nome_produto_caro[sizeof(nome_produto_caro) - 1] = '\0';
        }
         
    }
    printf("\nPRODUTO MAIS CARO--\n");
    printf("PRODUTO: %s\n", nome_produto_caro);
    printf("PREÇO: %.2f\n", preco_produto_caro);
    printf("-------------------------------");
    printf("\nPREÇO TOTAL: %.2f\n", preco_total);

    return 0;
}