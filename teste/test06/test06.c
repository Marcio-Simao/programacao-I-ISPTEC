#include <stdio.h>

int main()
{
    int count, letra = 65;


    printf("Digite a quantidade de letra: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
                printf("%c", letra);
        }
        printf("\n");
    }
    
}