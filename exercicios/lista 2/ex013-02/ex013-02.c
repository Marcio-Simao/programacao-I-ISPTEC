#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    printf("Lista de softwares desenvolvidos em C:\n");
    printf("1. GCC (GNU Compiler Collection)\n");
    printf("2. Clang\n");
    printf("3. SQLite\n");
    printf("4. Git\n");
    printf("5. VLC Media Player\n");
    
    return 0;
}
