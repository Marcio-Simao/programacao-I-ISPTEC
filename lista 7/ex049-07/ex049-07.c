#include <stdio.h>
#include <locale.h>
#define cont 20
struct Ida
{
    int idade[cont]
};

int main()
{
    struct Ida idade; 
    int soma = 0;

    //lendo os dados 

    for (int i = 1; i < cont; i++)
    {
        printf("%dª idade: ", i);
        scanf("%d", &idade.idade[i]);

        soma += idade.idade[i];
    }
    //Apresentado a soma 
    printf("A soma é %d ", soma);

}
