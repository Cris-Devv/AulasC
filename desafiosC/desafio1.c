#include <stdio.h> 
#include <windows.h> 

// Algoritmo para calcular a multiplicação entre dois números inteiros.
int main(){

    SetConsoleOutputCP(CP_UTF8);

    int n1, n2;
    printf("Insira dois numeros inteiros: ");
    scanf("%i %i", &n1, &n2);
    printf("A multiplicacao de %i por %i eh: %i", n1, n2, n1*n2);
    
    return 0;
}