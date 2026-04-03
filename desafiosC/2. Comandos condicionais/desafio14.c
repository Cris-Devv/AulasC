#include <stdio.h>
#include <windows.h>

// Algoritmo que mostra se um número inteiro é zero, positivo ou negativo
int main(){

    SetConsoleOutputCP(CP_UTF8);

    int n1;
    printf("Digite um número inteiro: ");
    scanf("%i", &n1);

    if (n1 > 0){
        printf("O número é positivo.");
    } else if (n1 < 0){
        printf("O número é negativo.");
    } else {
        printf("O número é zero.");
    }

    return 0;
}