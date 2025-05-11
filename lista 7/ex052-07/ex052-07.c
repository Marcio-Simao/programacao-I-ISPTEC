#include <stdio.h>;
#include <string.h>;
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
};
typedef struct Estoque Estoque;


int main()
{
    int contador = 0;
    char opcao;
    Estoque Estoque;

    do
    {   
        printf("\n--TuDeliciosoGest--\n");
        printf("\n1-Cadastrar \n");
        printf("\n2-Registrar Venda\n");
        printf("\n3-Estoque\n");
        printf("\n0-Sair\n");
        scanf("%c", opcao);
        switch (opcao)
        {
            case '1':
                /* Cadastrar Venda */
            break;
        
            case '2':
                /* cadastrar produtos */
            break;

            case '3':
                /* visualizar Estoque */
            break;

            case '0':
                printf("\nPrograma Encerrado!\n"); /* Sair */
            break;

            default:
                printf("\nVolor invalido!\n");
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
        printf("Estoque Vazio!");
    }

    else
    {
        printf("\nPÃO: %d\n", estoque.pao);
        printf("QUEIJO: %d", estoque.queijo);
        printf("CARNE: %d", estoque.carne);

        printf("--Bebidas--");

        for (int i = 0; i < estoque.total_bebidas; i++)
        {
            printf("Nome: %s", estoque.bebidas[i].nome_bebidas);
            
            printf("Quantidade: %d", estoque.bebidas[i].quant_bebida);

        }
        
    }
    
    
}