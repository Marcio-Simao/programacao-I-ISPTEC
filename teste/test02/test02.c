#include <stdio.h> #include <string.h>

int main()
{
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if(nota >= 9.5)
    {
        printf("\nAprovado!\n");
    }
   
}