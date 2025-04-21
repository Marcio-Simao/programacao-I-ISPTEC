#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int vida_util_anos;
    float lucro_mensal, custo_torno;
    
    printf("Digite o tempo de vida útil (em anos) do torno mecânico: ");
    scanf("%d", &vida_util_anos);
    printf("Digite o lucro mensal gerado pelo torno: ");
    scanf("%f", &lucro_mensal);
    printf("Digite o custo do torno para a empresa: ");
    scanf("%f", &custo_torno);
    
    float meses_para_triplo = (3 * custo_torno) / lucro_mensal;
    printf("\nMeses necessários para triplo retorno do investimento: %.2f meses\n", meses_para_triplo);
    
    int total_meses = vida_util_anos * 12;
    float lucro_bruto = lucro_mensal * total_meses;
    float custo_manutencao = 3 * (0.02 * lucro_bruto);  
    float lucro_liquido = lucro_bruto - custo_manutencao;
    printf("Lucro líquido durante a vida útil (após manutenções): %.2f\n", lucro_liquido);
    
    return 0;
}
