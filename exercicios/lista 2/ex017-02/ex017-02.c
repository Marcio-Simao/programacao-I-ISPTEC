#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int horas_normais, horas_extras, num_dependentes;
    float valor_hora;
    
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &horas_normais);
    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valor_hora);
    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%d", &horas_extras);
    printf("Digite o número de pessoas dependentes: ");
    scanf("%d", &num_dependentes);
    
    float salario_normal = horas_normais * valor_hora;
    
    float salario_extra = horas_extras * (valor_hora * 2) * 0.96;
    
    float bonus = num_dependentes * (salario_normal * 0.05);
    
    float salario_final = salario_normal + salario_extra + bonus;
    
    printf("\nSalário final do funcionário: %.2f\n", salario_final);
    
    return 0;
}
