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
   data data;
   char cor[10];
   float preco;
};

typedef carro carro;

//aeron smith
/*
   o tipo de estrutura da estruct carro é 
   estrutura de estrutura são aqueles em 
   que pelo menos um campo da estrutura é 
   uma variavel de uma estrutura 
*/

int main(){

}