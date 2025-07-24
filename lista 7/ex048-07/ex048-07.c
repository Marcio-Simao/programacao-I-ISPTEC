#include <stdio.h>
#include <locale.h>

//estrutura Pessoa 

struct Pessoa 
{
    char nome[90];
    char sexo[90]; 
    float peso;
};

//renomeando o estrutura Pessoa
typedef struct Pessoa pessoa;

int main()
{
    //criando variavel do tipo pessoa
    pessoa pessoa1;

    //lendo os dados 
    
    printf("\n--REGISTRO PESSOA--\n");
    
    printf("\nNome Completo: ");
    scanf("%90[^\n]s", pessoa1.nome);
    fflush(stdin);

    printf("\nSexo: ");
    scanf(" %s", pessoa1.sexo);
    
    printf("Peso: ");
    scanf("%f", &pessoa1.peso);
    
    printf("\n_____________________\n"); 
    
    //Apresentando os dados na tela
    
    printf("\n--PESSOAS REGISTRADAS--\n");

    printf("\nNome Completo: %s", pessoa1.nome);
    
    printf("\nSexo: %s\n", pessoa1.sexo);
    
    printf("\npeso: %.2f\n", pessoa1.peso);
    
    printf("\n_____________________\n");
    
}