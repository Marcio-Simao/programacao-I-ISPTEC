#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR 100

int main()
{
    char nome_completo[MAX_CHAR];

    printf("Digite seu nome: ");
    scanf("%100[^\n]", nome_completo);

    printf("Nome: %s\n\n\n", nome_completo);

}