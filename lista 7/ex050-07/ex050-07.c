#include <stdio.h>
#include <locale.h>
#define MAX 100

void mostrar ( Ida dados, int cont);

struct Ida
{
    int idade[MAX];
};
typedef struct Ida Ida;

int main()
{
    Ida idade;

    int soma = 0, cont = 0;
    
    char opcao; 

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
                mostrar(idade, cont);
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

void mostrar ( Ida dados, int cont){
    if (cont == 0)
    {
        printf("\nnenhuma idade registrada!\n");
    }
    else
    {
        for (int i = 0; i < cont; i++)
        {
            printf("\nIdade: %d\n", dados.idade[i]);
        }
    }
}