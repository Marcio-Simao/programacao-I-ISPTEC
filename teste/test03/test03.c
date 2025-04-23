#include <stdio.h> //Inclui a biblioteca padrão de entrada e saída em C.
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{

    char nome[TAM];
    int idade;
    float peso;
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "portuguese");

    //criando e inicializando 
    tipo_pessoa pes = {"Márcio",20,45.5};

    //imprimindo os valores 

    printf("\n---DADOS DA PESSOA---\n");
    printf("\nNome: %s\n", pes.nome);
    printf("\nIdade: %d\n", pes.idade);
    printf("\nPeso: %.2f\n", pes.peso);
    printf("\n---------------------\n");

}