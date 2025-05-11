#include <stdio.h>;
#include <string.h>;


int main()
{
    int contador = 0;
    char opcao;

    do
    {
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