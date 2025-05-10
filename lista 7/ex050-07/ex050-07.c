#include <stdio.h>
#include <locale.h>
#define max 100

int mostrar ( int Ida, int cont);

struct Ida
{
    int idade[max];
};
typedef struct Ida Ida;
int main()
{
    Ida idade; 
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

            case 'o': 
                printf("    nPrograma terminado!\n");
            break;

            default:
                printf("Valor invalido!");
            break;
        }
   } while (opcao != 'o');
   

}

int mostrar ( int Ida, int cont){
    if (max == cont)
    {
        /* code */
    }
    
    for(int i = 0; i  ){

    }

}