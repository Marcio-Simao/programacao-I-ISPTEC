#include <stdio.h>
#include <string.h>
#include <locale.h>
//definindo uma constante 
#define cont 5

int main () 
{

    int idade [5] [5];
    //armazeneando os valores na matriz
    for (int i = 0; i < cont; i++)
    {
        for (int j = 0; j < cont; j++)
        {
          printf("idade [%d] [%d]", i, j);
          scanf("%d", &idade[i] [j]);  
        }
    }
    //apresntando os valores da matriz 
    for(int i = 0; i < cont; i++)
    {
        for (int j = 0; j < cont; j++)
        {
            printf("idade [%d] [%d]: %d", i, j, idade [i] [j]);
        }
        

    }
}
