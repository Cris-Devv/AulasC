#include <stdio.h>
#include <windows.h>

// Algoritmo para calcular o quociente e o resto da divisão entre dois números inteiros.
int main() {

    SetConsoleOutputCP(CP_UTF8);

    int x, y;
    printf("Digite dois números inteiros: ");
    scanf("%i %i", &x, &y);
    printf("O quociente de %i por %i e o resto da divisao são: %i e %i, respectivamente.", x, y, x/y, x%y);
    
    return 0;
}