#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    
    int soma = a + b;
    
    printf("Soma: %d\n", soma);
    
    return 0;
}
