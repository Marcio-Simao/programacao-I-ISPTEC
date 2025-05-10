#include <stdio.h>
#include <locale.h>
#define MAX 100

struct Local
{
    char pais[70];
    char provincia[50];
};

typedef struct Local Local;

struct Datas_For
{
    int dia;
    char mes[15];
    int ano;
};

typedef struct Datas_For Datas_For;

struct Formatura
{
    Local local;
    Datas_For data_for [3]; 
    char desegnacao_For [4] [70]
};

typedef Formatura Formatura;

struct Data_Nasc 
{
    int dia;
    char mes[15];
    int ano;
};

typedef struct Data_Nasc Data_Nasc;

struct Pessoa
{
    int idade;
    Data_Nasc data_nasc;
    Formatura formatura;
}; 

typedef struct Pessoa Pessoa;

int main ()
{
    Pessoa pessoas[MAX];
    int cont = 0;
    char opcao;
    
    do
    {
        switch (opcao)
        {
            case '1':
                /* mostrar */
            break;
        
            case '2':
                /* adicionar */
            break;
        
            case '3':
                /* remover */
            break;
            
            case '0':
                /* sair */
                printf("Programa encerrado!");
            break;
        
            default:
                printf("\nValor invalido!\n");
            break;
        }
    } while (opcao != '0');
}

void Mostrar ( Pessoa *pessoas, int cont)
{
    if (cont == 0)
    {
        printf("\nNenhuma pessoa registrada!\n");
    }

    else
    {
        for (int i = 0; i < cont; i++)
        {
            printf("\n--%d PESSAO--\n");
            
            printf("\nidade: %d\n", pessoas->idade);

            printf("\ndata de nascimento\n");
            printf("\nDD/MM/AA\n");
            scanf("%d %d %d", pessoas->data_nasc.dia, pessoas->data_nasc.mes, pessoas->data_nasc.ano);


        }
        
    }
    
    
} 