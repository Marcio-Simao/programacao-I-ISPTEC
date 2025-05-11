#include <stdio.h>;
#include <string.h>;


int main()
{
    int contador = 0;
    char opcao;

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
    

}