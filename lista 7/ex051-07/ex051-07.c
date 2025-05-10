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
struct Datas_For
{
    int dia;
    char mes[15];
    int ano;
};
typedef struct Datas_For Datas_For;
//estrutura formatura
struct Formatura
{
    Local local [4];
    Datas_For data_for [4]; 
    char desegnacao_For [4] [70]
};
typedef Formatura Formatura;
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
            printf("\n--%d PESSAO--\n");
            
            printf("\nidade: %d\n", pessoas[i].idade);

            printf("\ndata de nascimento\n");
            printf("\n%d de %s de %d\n", pessoas[i].data_nasc.dia, pessoas[i].data_nasc.mes, pessoas[i].data_nasc.ano);

            printf("\n--FORMATURA--\n");
            
            printf("\ndesignação da sua formatura:\n");

            for (int l = 0; l < 4; l++)
            {
                printf("%s", pessoas[i].formatura.desegnacao_For[l]);

                printf("Local: %s ", pessoas[i].formatura.local[l].pais);
                
                printf("Local: %s ", pessoas[i].formatura.local[l].provincia);
                
            }
            
            
        }
        
    }
    
    
} 