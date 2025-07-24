#include <stdio.h>
#include <string.h>
#include <locale.h>>
int main()
{
    setlocale(LC_ALL, "portuguese");
    char n;
    printf("Digite um valor 1 a 7: ");
    scanf("%c", &n);
    switch (n)
    {
        case '1':
            printf("Domingo");
        break;
        case '2':
            printf("segunda");
        break;
        case '3':
            printf("Terça");
        break;
        case '4':
            printf("Quarta");
        break;
        case '5':
            printf("Quinta");
        break;
        case '6':
            printf("Sexta");
        break;
        case '7':
            printf("Sábado");
        break;
        default:
        printf("Valor invalido!");
        break;
    }
}