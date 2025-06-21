#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome_completo[100];

    printf("Digite seu nome: ");
    scanf("%[^\n]", nome_completo);

    printf("Nome: %s\n\n\n", nome_completo);

}