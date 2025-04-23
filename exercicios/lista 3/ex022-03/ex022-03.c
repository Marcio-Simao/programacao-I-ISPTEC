#include <stdio.h>

int main(){

    int tot = 0;

    for (int i = 1; i <= 100; i++){
       
        tot = tot + i;
        
    }
    printf("\nO total da soma é %d\n", tot);   
}