#include <stdio.h>
#include <windows.h>

// Algoritmo para calcular o antecessor e o sucessor de um número inteiro.
int main(){

    SetConsoleOutputCP(CP_UTF8);

    int n1;
    printf("Insira um numero inteiro: ");
    scanf("%i", &n1);
    printf("O antecessor de %i e seu sucessor sao, respectivamente: %i e %i", n1, n1-1, n1+1);
    
    return 0;
}