#include <stdio.h>
#include <windows.h>

// Algoritmo para calcular a soma, produto e quociente entre dois números.
int main () {

    SetConsoleOutputCP(CP_UTF8);

    float n1, n2;
    printf("Digite dois números: ");
    scanf("%f %f", &n1, &n2);
    printf("A soma, produto e quociente entre %.2f e %.2f são, respectivamente: %.2f, %.2f e %.2f.", n1, n2, n1+n2, n1*n2, n1/n2);
    
    return 0;
}