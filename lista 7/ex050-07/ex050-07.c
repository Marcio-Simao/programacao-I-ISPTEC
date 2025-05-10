#include <stdio.h>
#include <locale.h>
#define MAX 100

struct Ida
{
    int idade[MAX];
};
typedef struct Ida Ida;

void mostrar ( Ida dados, int cont);

int adicionar( Ida *dados, int cont);

int main()
{
    Ida idade;

    int soma = 0, cont = 0;
    
    char opcao; 

    do
   {
        printf("\n--MENU--\n");
        printf("\n1-mostrar\n");
        printf("\n2-adicionar\n");
        printf("\n3-Remover\n");
        printf("\n0-sair\n");
        scanf(" %c", &opcao);

        switch (opcao)
        {
            case '1':
                mostrar(idade, cont);
            break;
            
            case '2':
                cont = adicionar(&idade, cont);
            break;

            case '3':
                
            break;

            case '0': 
                printf("\nPrograma terminado!\n");
            break;

            default:
                printf("Valor invalido!");
            break;
        }
   } while (opcao != '0');
   

}

void mostrar ( Ida dados, int cont)
{
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

int adicionar( Ida *dados, int cont)
{
    if (cont == MAX)
    {
        printf("\nexcedeu a quantidade de idades registrados!\n");
    }

    else
    {

        printf("\nDigite idade: ");
        scanf("%d", &dados->idade[cont]);
        
        cont += 1;

        return cont;
    }
    
}

void remover()
{


    
}