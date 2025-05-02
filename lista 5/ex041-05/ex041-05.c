#include <stdio.h>

int main(){
    //declaração de variaveis simples 
    int numero, maior_numero = 0;
    //loop para comparar 
    for(int i = 0; i <= 5; i++){
        
        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero >= maior_numero){
        
            maior_numero = numero;
        
        }
    }
    
    printf("O maior número digitado foi: %d\n", maior_numero);
}