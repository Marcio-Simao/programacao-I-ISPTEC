#include <stdio.h>

int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Maior de Idade!\n");
    } else{
        printf("Menor de idade!\n");
    }
}