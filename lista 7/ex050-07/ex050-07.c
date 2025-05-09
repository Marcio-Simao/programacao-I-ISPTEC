#include <stdio.h>
#include <locale.h>
#define max 100


int adicionar(Ida){

} 

struct Ida
{
    int idade[max];
};

int main()
{
    struct Ida idade; 
    int soma = 0;
    char opcao; 
    int cont = 0;

    do
   {
        printf("--MENU--");
        printf("1-mostrar");
        printf("2-adicionar");
        printf("3-Remover");
        printf("0-sair");
        scanf(" %c", &opcao);

        switch (opcao)
        {
            case '1':
                printf("Funciona");
            break;
            
            case '2':
            /* code */
            break;

            case '3':
            /* code */
            break;
            default:
                printf("Valor invalido!");
            break;
        }
   } while (opcao != 'o');
   

}
