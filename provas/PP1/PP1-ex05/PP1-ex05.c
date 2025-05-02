#include <stdio.h>

int main() {
    int tabela[7][3] = {
        {6, 10, 24},   // linha 1
        {5, 2, 3},     // linha 2 (x e / implícito)
        {20, 2, 0},    // linha 3
        {30, 10, 12},  // linha 4
        {3, 8, 16},    // linha 5
        {24, 11, 0},   // linha 6
        {25, 5, 5}     // linha 8 (cinza nas colunas 2 e 4)
    };

    printf("Tabela preenchida:\n\n");
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%3d ", tabela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
