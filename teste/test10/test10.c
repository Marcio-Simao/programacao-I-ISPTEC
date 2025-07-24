#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];

    printf("\nDigite um nome: ");
    
    fgets(nome, sizeof(nome), stdin);

    printf("\n O seu nome é %s \n\n", nome);
}