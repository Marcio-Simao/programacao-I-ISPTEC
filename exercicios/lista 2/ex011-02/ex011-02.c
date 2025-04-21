#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    
    // Verifica se a divisão é possível (evita divisão por zero)
    if (b != 0) {
        int divisao = a / b;
        printf("Divisão: %d\n", divisao);
    } else {
        printf("Divisão: Não é possível dividir por zero.\n");
    }
    
    return 0;
}
