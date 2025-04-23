#include <stdio.h>

int main(){
    int n1, n2, media;

    printf("1ª Nota: ");
    scanf("%d", &n1);

    printf("2ª Nota: ");
    scanf("%d", &n2);

    media = (n1 + n2)/2;

    if (media >= 6)
    {

        printf("%d valores",media);
        printf("\nAPROVADO!\n");
    }
    else
    {
        printf("%d valores",media);
        printf("\nREPROVADO!\n");
    }
    
    
}