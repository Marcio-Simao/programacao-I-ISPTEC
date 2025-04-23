#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");
    
    int empresas_2017 = 84;
    

    int empresas_2016 = (int)round(empresas_2017 / 0.78);

    int empresas_2015 = (int)round(empresas_2017 / 0.58);
    
    printf("Para igualar a produção:\n");
    printf("Empresas em 2016: %d\n", empresas_2016);
    printf("Empresas em 2015: %d\n\n", empresas_2015);
    
    int empresas_2017_para_passar_2016 = (int)round(empresas_2016 * 1.22);
    int empresas_2017_para_passar_2015 = (int)round(empresas_2015 * 1.42);
    
    printf("Para passar 22%% da produção de 2016, seriam necessárias: %d empresas\n", empresas_2017_para_passar_2016);
    printf("Para passar 42%% da produção de 2015, seriam necessárias: %d empresas\n", empresas_2017_para_passar_2015);
    
    return 0;
}
