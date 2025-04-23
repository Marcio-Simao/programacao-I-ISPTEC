#include <stdio.h>

int main(){
    int n1, n2, operador;
    printf("Digite o 1º número: ");
    scanf("%d",&n1);

    printf("\nDigite o 2º número: ");
    scanf("%d",&n2);

    printf("\n---Escolha a operação---\n");
    printf("   SOMA-1\n");
    printf("   SUBTRAÇÃO-2\n");
    printf("   DIVISÃO-3\n");
    printf("   MULTIPLICAÇÃO-4\n");
    scanf("%d\n", &operador);

    switch (operador)
    {
    case 1:
        printf("%d + %d = %d\n", n1, n2, n1 + n2 );
        break;

    case 2:
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
        break;
    case 3: 
        printf("%d / %d = %d\n", n1, n2, n1 / n2);
        break;
        
    case 4: 
        printf("%d X %d = %d\n", n1, n2, n1 * n2);
        break;
    
    default:
        break;
    }


}