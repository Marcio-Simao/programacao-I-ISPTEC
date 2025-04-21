#include <stdio.h>

int main(){
    char senha_atual[7] = "123456", senha[7];
    int tenta = 3;
    
    printf("\n---ACESSAR---\n");

    while (strcmp(senha, senha_atual) != 0)
    {
        printf("\nTENTATIVAS: %d\n", tenta);
        printf("\nSENHA: \n");
        scanf("%6s", senha);
    
        if (strcmp(senha, senha_atual) == 0)
        {
            printf("\nSENHA CORRETA\n");
        } else{
    
            printf("\nSENHA INCORRETA\n");
    
        }

        tenta -= 1;
        if (tenta == 0) break;
    }
    
    if(tenta == 0){
        printf("\nTentativas esgotadas, tente de novo mais tarde!\n");     
    }
}