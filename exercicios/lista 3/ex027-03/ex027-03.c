#include <stdio.h>

int soma( int a, int b){

    return a + b;
}

int main(){

    int n1, n2, resultado;

    printf("Digite um valor:");
    scanf("%d",&n1);

    printf("Digite outro número: ");
    scanf("%d",&n2);

    resultado = soma(n1, n2);    
    
    printf("A soma entre %d e %d é %d\n", n1, n2, resultado);
}