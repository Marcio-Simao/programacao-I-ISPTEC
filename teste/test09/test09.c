#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[] = "Márcio";
    char nome2[] = "Márcio";

    if (strcmp(nome1, nome2) == 0)
    {
        printf("\n sao iguais\n");
    }
    else
    {
        printf("\n Nao sao iguais \n");
    }       
}