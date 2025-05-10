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

int remover( Ida *dados, int cont);

int main()
{
    Ida idade;

    int cont = 0;
    
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
                cont = remover(&idade, cont);
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

int remover( Ida *dados, int cont)
{
    int a;

    if (cont == 0)
    {
        printf("\nnenhuma idade registrada!\n");
    }

    else
    {
        printf("\n--REMOVER--\n");
       
        printf("\ndigite o número da idade que desejas remover!\n");
        printf("\nescolhar apenas uma idade\n");
       
        for (int i = 0; i < cont; i++)
        {
            printf("\n%d-idade: %d\n", i, dados->idade[i]);
        }
       
        printf("Digite um valor de 0 á %d", cont);
        scanf(" %d", &a);

        for (;a < cont; a++)
        {
            dados->idade[a] = dados->idade[a + 1];
        }
        
        return cont -= 1;
    }
}