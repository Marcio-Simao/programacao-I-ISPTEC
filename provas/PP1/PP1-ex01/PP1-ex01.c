#include <stdio.h>

int main (){

    int num, l;
    
    printf("\nTABUADA\n");
    printf("\nDe: ") ;
    scanf("%d", &num);

    printf("\nAté: ");
    scanf("%d", &l);

    for(int i = 1; i <= l; i++){

        printf("\n%d X %d = %d\n", num, i, num * i);

    }

}