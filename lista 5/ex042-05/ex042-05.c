#include <stdio.h>
#include <string.h>
#include <locale.h>

struct data
{
   int ano; 
   char mes[30];
   int dia;   
};

typedef data data;

struct carro 
{
   char marca[15];
   char cor[10];
   float preco;
   data data;
};

typedef carro carro;

//aeron smith
/*
   o tipo de estrutura da estruct carro é estrutura de estrutura são aqueles em 
   que pelo menos um campo da estrutura é uma variavel de uma estrutura 
*/
carro vet_carro[20];
int main(){

   printf("\nREGISTRAR CARRO\n");
   
   for (int i = 0; i < 20; i++)
   {
      printf("\nMarca: ");
      scanf("%s", vet_carro[i].marca);

      printf("\nCor: ");
      scanf("%s", vet_carro[i].cor);

      printf("\nPreço: ");
      scanf("%.3f", vet_carro[i].preco);

      printf("\nDATA\n");

      printf("Dia: ");
      scanf("%d", &vet_carro[i].data.dia);
      
      printf("\nMês: ");
      scanf("%s", vet_carro[i].data.mes);

      printf("\nAno: ");
      scanf("%d", &vet_carro[i].data.ano);
   }
       
   
   

}