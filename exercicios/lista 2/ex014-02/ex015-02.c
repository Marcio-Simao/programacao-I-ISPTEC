#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    char nome[50] = "Seu Nome Aqui";  
    printf("Nome: %s\n\n", nome);
    
    int madeira_2021 = 43;
    int gesso_2021 = 30;
    int cimento_2021 = 102;
    int areia_2021 = 125;
    int acao_2021 = 220;     
    int pedra_2021 = 360;
    
    int madeira_2022 = 90;
    int gesso_2022 = 45;
    int cimento_2022 = 180;
    int areia_2022 = 425;
    int acao_2022 = 438;
    int pedra_2022 = 1000;
    
    int total_2021 = madeira_2021 + gesso_2021 + cimento_2021 + areia_2021 + acao_2021 + pedra_2021;
    int total_2022 = madeira_2022 + gesso_2022 + cimento_2022 + areia_2022 + acao_2022 + pedra_2022;
    int total_geral = total_2021 + total_2022;
    
    printf("Total de material em 2021: %d toneladas\n", total_2021);
    printf("Total de material em 2022: %d toneladas\n", total_2022);
    printf("Total de material nos dois anos: %d toneladas\n\n", total_geral);
    
    printf("Pedra Brita em 2022: %d toneladas\n\n", pedra_2022);
    
    int total_gesso = gesso_2021 + gesso_2022;
    printf("Total de Gesso (2021 + 2022): %d toneladas\n\n", total_gesso);
    
    int materiais2021[6] = {madeira_2021, gesso_2021, cimento_2021, areia_2021, acao_2021, pedra_2021};
    int min2021 = materiais2021[0], max2021 = materiais2021[0];
    for (int i = 0; i < 6; i++) {
        if (materiais2021[i] < min2021) min2021 = materiais2021[i];
        if (materiais2021[i] > max2021) max2021 = materiais2021[i];
    }
    printf("2021 - Menor quantidade: %d toneladas, Maior quantidade: %d toneladas\n", min2021, max2021);
    
    int materiais2022[6] = {madeira_2022, gesso_2022, cimento_2022, areia_2022, acao_2022, pedra_2022};
    int min2022 = materiais2022[0], max2022 = materiais2022[0];
    for (int i = 0; i < 6; i++) {
        if (materiais2022[i] < min2022) min2022 = materiais2022[i];
        if (materiais2022[i] > max2022) max2022 = materiais2022[i];
    }
    printf("2022 - Menor quantidade: %d toneladas, Maior quantidade: %d toneladas\n\n", min2022, max2022);
    
    int total_cimento = cimento_2021 + cimento_2022;
    int total_acao = acao_2021 + acao_2022;
    printf("Areia em 2021: %d toneladas\n", areia_2021);
    printf("Total de Cimento (2021 + 2022): %d toneladas\n", total_cimento);
    printf("Total de Aço (2021 + 2022): %d toneladas\n", total_acao);
    
    return 0;
}
