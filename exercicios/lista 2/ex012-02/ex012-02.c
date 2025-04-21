#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int anoNascimento = 1975;
    int anoReferencia = 2026;
    int idade = anoReferencia - anoNascimento;
    
    printf("Um cidadão nascido em %d terá %d anos em %d.\n", anoNascimento, idade, anoReferencia);
    return 0;
}
