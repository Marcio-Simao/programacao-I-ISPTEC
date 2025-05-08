#include <stdio.h>
#include <locale.h>

//estrutura Pessoa 

struct Pessoa 
{
    char sexo; 
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
    
    printf("\nSexo(M/F): ");
    scanf(" %c", &pessoa1.sexo);
    
    printf("Peso: ");
    scanf("%f", &pessoa1.peso);
    
    printf("\n_____________________\n"); 
    
    //Apresentando os dados na tela
    
    printf("\n--PESSOAS REGISTRADAS--\n");
    
    printf("\nSexo: %c\n", pessoa1.sexo);
    
    printf("\npeso: %.2f\n", pessoa1.peso);
    
    printf("\n_____________________\n");
    
}