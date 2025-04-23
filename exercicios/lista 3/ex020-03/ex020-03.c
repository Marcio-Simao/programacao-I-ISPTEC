#include <stdio.h>

int main(){
    float nota; 

    printf("Digite a sua nota: ");
    scanf("%.1f", &nota);

    if(nota >= 7){
        
        printf("APROVADO!\n");

    } else{
        printf("REPROVADO!\n");
    }
    

}