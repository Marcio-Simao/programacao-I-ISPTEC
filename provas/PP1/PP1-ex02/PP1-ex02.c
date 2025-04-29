#include <stdio.h>

int main(){

    char letra;
    int num;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra);

    if ((letra == 'B') || (letra == 'P'))
    {
        if (letra == 'B')
        {
            printf("\nDigite um número: ");
            scanf("%d", &num);
            
            if (num == 1)
            {
                num = 0;
                while ((num != 1) && (num != 357) && (num != 617))
                {
                    printf("\nDigite um número: ");
                    scanf("%d", &num);
                    
                    if (num == 1)
                    {
                        num = 0;
                        while (num != 7)
                        {
                            printf("Digite um número: ");
                            scanf("%d", &num);   

                            if(num = 7)
                            {
                               printf("\nVariante ALFA do Reino Unido\n"); 
                            }
                        }
                    }
                    
                    if (num == 357)
                    {
                        /* code */
                    }
                    
                }  
            }    
        }
    }
    
}