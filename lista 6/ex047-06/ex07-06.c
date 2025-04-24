#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL,"");

    int area_EIN;

    printf("\nDigite o número correspondente a área!\n");
    printf("\nÁREAS DA ENGENHARIA INFORMÁTICA\n");
    printf("\nProgramação-[1]\n");
    printf("\nAdministração-[2]\n");
    printf("\nAdministração de Base de Dados-[3]\n");
    printf("\nCloud Computing-[4]\n");
    printf("\nChief Technology Officer-[5]\n");
    printf("\nEspecialista em E-commerce-[6]\n");
    printf("\nQualidade de Software-[7]\n");
    printf("\nSegurança da Informação-[8]\n");
    printf("\nSuporte Técnico-[9]\n");
    scanf("%d", &area_EIN);
    
    switch (area_EIN)
    {
        
    case 1: 
    {
        int prog;

        printf("AREAS DA PROGRAMAÇÃO");
        printf("\nSoftwares Empresariais/pessoais-[1]\n");
        printf("\nmobile-[2]\n");
        printf("\nAdministração de Softwares-[3]\n");
        scanf("%d", &prog);
        
        switch(prog){
            case 1: 
            {

                break;
            }

            case 2: 
            {

                break;
            }

            case 3: 
            {

                break;
            }

            default:

            break;
        }
        break;
    }
        
    case 2:
        printf("consegui");
        break;    
    case 3:
        printf("consegui");
        break; 
    case 4:
        printf("consegui");
        break;  
    case 5:
        printf("consegui");
        break;
    case 6:
        printf("consegui");
        break;
    case 7:
        printf("consegui");
        break;
    case 8:
        printf("consegui");
        break;
    case 9:
        printf("consegui");
        break;
    default:
        printf("Número Invalido!");
        break;
    }
}