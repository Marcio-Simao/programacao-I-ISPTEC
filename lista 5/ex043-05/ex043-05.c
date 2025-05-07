#include <stdio.h>
#include <string.h>
#include <locale.h>



int main () 
{

    int idade [5] [5], cont = 5;
    for (int i = 0; i < cont; i++)
    {
        for (int j = 0; j < cont; i++)
        {
          printf("idade [%d] [%d]", i, j);
          scanf("%d", &idade[i] [j]);  
        }
    }
}
