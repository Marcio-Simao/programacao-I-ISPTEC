#include <stdio.h>
#include <string.h>
#include <locale.h>

struct endereco
{
    char cidade[60];
    char rua[60];
    int num_casa; 
};

typedef struct endereco endereco;

struct estudante
{
    char nome[50];
    int idade;
    int num_matricula;
    endereco endereco;  
};

typedef struct estudante estudante; 

int main(){
    
   estudante estu;

    printf("\n--CADASTRO--ALUNO--\n");
    
    printf("\nPrimeiro nome: ");
    scanf("%s", estu.nome);
    
    printf("\nIdade: ");
    scanf("%d", &estu.idade);
    
    printf("\nNúmero de matricula: ");
    scanf("%d", &estu.num_matricula);

    printf("\nCidade: ");
    scanf("%s", estu.endereco.cidade);

    printf("\nRua: ");
    scanf("%s", estu.endereco.rua);

    printf("\nNúmero da casa: ");
    scanf("%d", &estu.endereco.num_casa);

    printf("\n-----------------------\n");
}