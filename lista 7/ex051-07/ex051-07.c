#include <stdio.h>
#include <locale.h>
#define MAX 100
//estrutura local da formatura
struct Local
{
    char pais[70];
    char provincia[50];
};
typedef struct Local Local;
//estrutura data de formatura 
struct Data_For
{
    int dia;
    char mes[15];
    int ano;
};
typedef struct Data_For Data_For;
//estrutura formatura
struct Formatura
{
    Local local [2];
    Data_For data_for [2]; 
    char desegnacao_For [2] [70];
};
typedef struct Formatura Formatura;
//estrutura data de nascimento
struct Data_Nasc 
{
    int dia;
    char mes[15];
    int ano;
};

typedef struct Data_Nasc Data_Nasc;
//estrutura pessoa
struct Pessoa
{
    int idade;
    Data_Nasc data_nasc;
    Formatura formatura;
}; 

typedef struct Pessoa Pessoa;

void Mostrar ( Pessoa pessoas[], int cont);

int adicionar( Pessoa pessoas[], int cont);

int main ()
{
    Pessoa pessoas[MAX];
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
                Mostrar(pessoas, cont);
            break;
        
            case '2':
                cont = adicionar(pessoas, cont);
            break;
        
            case '3':
                /* remover */
            break;
            
            case '0':
                /* sair */
                printf("\nPrograma encerrado!\n");
            break;
        
            default:
                printf("\nValor invalido!\n");
            break;
        }
    } while (opcao != '0');
}
//função mostrar
void Mostrar ( Pessoa pessoas[], int cont)
{
    if (cont == 0)
    {
        printf("\nNenhuma pessoa registrada!\n");
    }

    else
    {
        for (int i = 0; i < cont; i++)
        {
            printf("\n--%d PESSAO--\n", i);
            
            printf("\nidade: %d\n", pessoas[i].idade);

            printf("\ndata de nascimento\n");
            printf("\n%d de %s de %d\n", pessoas[i].data_nasc.dia, pessoas[i].data_nasc.mes, pessoas[i].data_nasc.ano);

            printf("\n--FORMATURA--\n");
            
            
            for (int l = 0; l < 2; l++)
            {   
                printf("\n------------------\n");
                
                printf("\ndesignação da sua formatura:\n");

                printf("\n%s\n", pessoas[i].formatura.desegnacao_For[l]);

                printf("\nLocal: %s/ %s \n", pessoas[i].formatura.local[l].pais, pessoas[i].formatura.local[l].provincia);

                printf("\nData de Formatura: \n");

                printf("%d de %s de %d", pessoas[i].formatura.data_for[l].dia, pessoas[i].formatura.data_for[l].mes , pessoas[i].formatura.data_for[l].ano);
                
                printf("\n------------------\n");
            }   
        }   
    }    
}
//função adicionar
int adicionar( Pessoa pessoas[], int cont)
{
    if (cont == MAX)
    {
        printf("\nexcedeu a quantidade de idades registrados!\n");
    }
 else
    {
        
        printf("\n--ADICIONAR PESSOA--\n");
        
        printf("\nidade: ");
        scanf(" %d", &pessoas[cont].idade);
        while (getchar() != '\n');

        printf("\ndata de nascimento: ");
        scanf("%d  %s  %d", &pessoas[cont].data_nasc.dia, pessoas[cont].data_nasc.mes, &pessoas[cont].data_nasc.ano);
        while (getchar() != '\n');

        printf("\n--FORMATURA--\n");

        for (int l = 0; l < 2; l++)
        {
            printf("\n------------------\n");

            printf("\ndesignação da sua formatura:\n");
            scanf("%[^\n]", pessoas[cont].formatura.desegnacao_For[l]);
            while (getchar() != '\n');

            printf("\n--Local--\n ");
            printf("\nPaís: ");
            scanf(" %s", pessoas[cont].formatura.local[l].pais);
            while (getchar() != '\n');


            printf("Provícia: ");
            scanf(" %s", pessoas[cont].formatura.local[l].provincia);
            while (getchar() != '\n');

            printf("\nData de Formatura: \n");

            scanf("%d %s %d", &pessoas[cont].formatura.data_for[l].dia, pessoas[cont].formatura.data_for[l].mes, &pessoas[cont].formatura.data_for[l].ano);
            while (getchar() != '\n');

            printf("\n------------------\n");
        } 

        printf("\n------------------\n");

        return cont += 1;    
    } 
}
//Função remover
int remover( Pessoa pessoas[], int cont)
{
    int a; 
    
    if (cont == 0)
    {
        printf("\nnenhuma pessoa registrada!\n");
    }
}