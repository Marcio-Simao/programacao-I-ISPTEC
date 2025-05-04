#include <stdio.h>
#include <string.h>
#include <locale.h>

struct data
{
   int ano; 
   int mes;
   int dia;   
};

typedef struct data data;

struct carro 
{
   char marca[15];
   char cor[10];
   float preco;
   data data;
};

typedef struct carro carro;

//aeron smith
/*
   o tipo de estrutura da estruct carro é estrutura de estrutura são aqueles em 
   que pelo menos um campo da estrutura é uma variavel de uma estrutura 
*/
carro vet_carro[21];
int main(){
   
   int quant;
   float prec;

   printf("\n----------\n");
   printf("Quantos carros desejas registrar: ");
   scanf("%d", &quant);
   printf("\n----------\n");

   printf("\nREGISTRAR CARRO\n");
   
   for (int i = 1; i < quant; i++)
   {
      printf("\n%dº CARRO\n", i);

      printf("\n----------\n");
      printf("\nMarca: ");
      scanf("%s", vet_carro[i].marca);

      printf("\nCor: ");
      scanf("%s", vet_carro[i].cor);

      printf("\nPreço: ");
      scanf("%f", &vet_carro[i].preco);

      printf("\nDATA\n");

      printf("\ndd/mm/aa\n");
      scanf("%d %d %d", &vet_carro[i].data.dia, &vet_carro[i].data.mes, &vet_carro[i].data.ano);
      printf("\n----------\n");
   }

   printf("\n----------\n");
   printf("\nDigite a capacidade financeira: ");
   scanf("%f", &prec);
   printf("\n----------\n");
   
   printf("\nCARROS\n");    
   for(int i = 0; i < quant; i++)   
   {

      if (prec >= vet_carro[i].preco)
      {      
         printf("\n----------\n");

         printf("\nMarca: %s \n", vet_carro[i].marca);

         printf("\nCor: %s\n", vet_carro[i].cor); 

         printf("\nPreço: %.3f\n", vet_carro[i].preco);

         printf("\nData: %d / %d / %d\n", vet_carro[i].data.dia, vet_carro[i].data.mes, vet_carro[i].data.ano);
         printf("\n----------\n");
      }   
   }   
   return 0;
}