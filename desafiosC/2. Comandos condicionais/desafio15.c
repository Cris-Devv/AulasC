#include <stdio.h>
#include <windows.h>

// Algoritmo para mostrar se um número é par ou ímpar
int main(){

    SetConsoleOutputCP(CP_UTF8);

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O número %d é par.", num);
    } else {
        printf("O número %d é ímpar.", num);
    }

    return 0;
}