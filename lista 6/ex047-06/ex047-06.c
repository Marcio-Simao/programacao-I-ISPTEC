#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL,"");

    int area_EIN;

    printf("\nDigite o número correspondente a área!\n");
    printf("\nÁREAS DA ENGENHARIA INFORMÁTICA\n");
    printf("\nProgramação-[1]\n");
    printf("\nAdministração de redes-[2]\n");
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
        printf("\nespec. conexão local/internet/cabeamentos/equipamentos microsoft(MCP,MCSE e MCSA), ou Cisco-CCNA\n");
        break;    
    case 3:
        printf("\nGestão/Data centers/Desenvolver sisitemas BD\n");
        break; 
    case 4:
        printf("\nespecialista em Big Data\n");
        printf("\nespecialista em inteligência Artifical");
        printf("\nespecialista em internet das coisas\n");
        printf("espe. em HPC-High performance");
        break;  
    case 5:
        printf("\npesquisas sobre TI; Desenvolvimento novas ideias responsável da empresa de TI\n");
        break;
    case 6:
        printf("\ngestão de e-commerce/segurança de dados dos clientes/ manter a disponibilidade do site\n");
        break;
    case 7:
        printf("\nTestador de todo tipo de softwares\n");
        break;
    case 8:
        printf("\nAnalista de segurança, proteção dos dados, monitorar \n");
        break;
    case 9:
        printf("consegui");
        break;
    default:
        printf("Número Invalido!");
        break;
    }
}