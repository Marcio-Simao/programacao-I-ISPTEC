#include <stdio.h>

int main(){

    int n, n1 = 9, soma = 0;

    printf("Núemro de termos: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {

        printf("%d + ", n1);

        soma += n1;
        n1 = (n1 * 10 ) + 1;
    } 

    printf("= %d \n", soma);
}