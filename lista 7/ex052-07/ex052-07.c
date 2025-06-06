#include <stdio.h>
#include <string.h>
#define MAX_BEB 10

struct Bebidas
{
    char nome_bebidas[60];
    int quant_bebida;

};
typedef struct Bebidas Bebidas;

struct Estoque
{
    int pao;
    int queijo;
    int carne;
    Bebidas bebidas[MAX_BEB];
    int total_bebidas;
    int posicao_bebuda[MAX_BEB];
};
typedef struct Estoque Estoque;

void Estoq (Estoque estoque, int cont);

int Cadastrar ( Estoque *cad, int cont);

int vanda( Estoque *venda, int cont);

int main()
{
    int contador = 0;
    char opcao;
    Estoque estoque;
    estoque.pao = 0;
    estoque.queijo = 0;
    estoque.carne = 0;
    estoque.total_bebidas = 0;


    do
    {   
        printf("\n--TuDeliciosoGest--\n");
        printf("\n1-Cadastrar Produto\n");
        printf("\n2-Registrar Venda\n");
        printf("\n3-Estoque\n");
        printf("\n0-Sair\n");
        scanf(" %c", &opcao);

        switch (opcao)
        {
            case '1':
                /* cadastrar produtos */
                contador = Cadastrar(&estoque, contador);
            break;
        
            case '2':
                /* Cadastrar Venda */
                vanda( &estoque, contador); 
            break;

            case '3':
                Estoq (estoque, contador);
            break;

            case '0':
                printf("\nPrograma Encerrado!\n"); /* Sair */
            break;

            default:
                printf("\nValor invalido!\n");
            break;
        }
    } while (opcao != '0');
    
    return 0;
}


void Estoq (Estoque estoque, int cont)
{
    printf("\n--ESTOQUE--\n");
    if (cont == 0)
    {
        printf("\nEstoque Vazio!\n");
    }

    else
    {
        printf("\nPÃO: %d\n", estoque.pao);
        printf("\nQUEIJO: %d\n", estoque.queijo);
        printf("\nCARNE: %d\n", estoque.carne);

        printf("\n--Bebidas--\n");

        for (int i = 0; i < estoque.total_bebidas; i++)
        {
            printf("\n-------------\n");
            printf("\nNome: %s\n", estoque.bebidas[i].nome_bebidas);
            
            printf("\nQuantidade: %d\n", estoque.bebidas[i].quant_bebida);
            printf("\n-------------\n");

        }
        
    }
    
    printf("\n---------------\n");
    
}

int Cadastrar ( Estoque *cad, int cont)
{   
    int pao_cad, queijo_cad, tipo_beb, carne_cad;

    printf("\n--CADASTAR--\n");

    printf("Pão: ");
    scanf("%d", &pao_cad);
    cad->pao += pao_cad;

    printf("Queijo: ");
    scanf("%d", &queijo_cad);
    cad->queijo += queijo_cad;

    printf("Carne: ");
    scanf("%d", &carne_cad);
    cad->carne += carne_cad;

    printf("\n--BEBIDAS--\n");

    printf("Quantos tipos de bebibas: ");
    scanf("%d", &tipo_beb);

    if (tipo_beb > MAX_BEB) {
        printf("Erro: máximo de %d tipos de bebidas.\n", MAX_BEB);
        tipo_beb = MAX_BEB;
    }
    for (int i = 0; i < tipo_beb; i++)
    {
        printf("\n-------------\n");
        printf("Nome: ");
        scanf(" %s", cad->bebidas[i].nome_bebidas);
        
        printf("Quantidade: ");
        scanf("%d", &cad->bebidas[i].quant_bebida);

        cad->posicao_bebuda[i] = i;
        printf("\n-------------\n");
    }
    cad->total_bebidas = tipo_beb;

    return  cont + 1;
}

int vanda( Estoque *venda, int cont)
{   
    int bega_vend, beb_vend, nome_beb, max = 5;

    if (venda->pao < max)
    {
        printf("\nO Pão está acabando!\n");
    }

    if (venda->queijo < max)
    {
        printf("\nO Queijo está acabando!\n");
    }

    if (venda->carne < max)
    {
        printf("\nA Carne está acabando!\n");
    }
    
    for (int i = 0; i < venda->total_bebidas; i++)
    {
        if (venda->bebidas[i].quant_bebida < max)
        {
            printf("\n%s está acabando!\n", venda->bebidas[i].nome_bebidas);
        }
    }
    
    printf("\n--REGISTRAR VENDA--\n");

    printf("\nHamburgues vendidos: ");
    scanf("%d", &bega_vend);

    venda->pao -= bega_vend;
    venda->queijo -= bega_vend;
    venda->carne -= bega_vend;
    
    printf("\nBebidas vendidas: ");
    scanf("%d", &beb_vend);
    
    for (int c = 0; c < beb_vend; c++)
    {
    
        printf("\nNome da bebida\n");
        for (int l = 0; l < venda->total_bebidas; l++)
        {
            printf("\n%d-%s \n", l, venda->bebidas[l].nome_bebidas);
        }
        scanf(" %d", &nome_beb);

        for (int i = 0; i < venda->total_bebidas; i++)
        {      
            if (nome_beb == i)
            {
                venda->bebidas[i].quant_bebida -= 1;  
            }       
        }
    }   
    return cont - 1;
}