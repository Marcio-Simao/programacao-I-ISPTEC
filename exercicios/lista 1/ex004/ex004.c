#include <stdio.h>
int main(){
    char provincia[30];
    float area;
    int num_mun;

    printf("Digite o nome de uma Província: ");
    scanf("%s",provincia);

    printf("\n Digite o número de municipio: ");
    scanf("%d", &num_mun);

    printf("\n Digite a sua area territorial em Km²: ");
    scanf("%f",&area);

    printf("\n=====================================\n");
    printf("        INFORMAÇÕES DA PROVÍCIA          \n");
    printf("=====================================\n");
    printf("Nome: %s\n", provincia);
    printf("Número de Municípios: %d\n", num_mun);
    printf("Área Territorial: %.2f km²\n", area);
    printf(" =====================================\n");
}