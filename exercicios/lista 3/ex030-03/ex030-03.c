#include <stdio.h>

int main(){

    int num, par = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        
        printf("\n%d\n", i);
        
        if (i % 2 == 0)
        {
            par += 1;
        }   
    }
    printf("\nneste intervamo existem %d número pares\n", par);
}
