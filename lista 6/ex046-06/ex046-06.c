#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int valor_inicial;
    int total;

    printf("Digite o valor dos 30%%: ");
    scanf("%d", &valor_inicial);

    total = valor_inicial / 0.18;

    printf("\nO valor total é %d\n", total);
}