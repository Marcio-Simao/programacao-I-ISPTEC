#include <stdio.h>

int main(){
    float N1, N2, Media;

    printf("Digite a 1ª nota: ");
    scanf("%f", &N1);

    printf("Digite o 2ª nota: ");
    scanf("%f", &N2);

    Media = (N1 + N2)/2;
    
    printf("%.2f", Media);
    
    return 0; 
}