#include <stdio.h>

int main() {

    int num;

    printf("Digita um número: \n");
    scanf("%d",&num);
    
    if ( num < 0 ) goto pular;  // Salta para o rótulo "pular"
    
    printf("Esta linha será ignorada.\n");
    
pular:
    printf("Numero negativo\n");
    
    return 0;
}
