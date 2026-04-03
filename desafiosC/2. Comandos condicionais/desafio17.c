#include <stdio.h>
#include <windows.h>

// Algoritmo que identifica e mostra se dois números são iguais ou diferentes, mostrando também qual o maior entre os diferentes.
int main(){

    SetConsoleOutputCP(CP_UTF8);

    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2){
        printf("Os números são iguais.");
    } else {
        printf("Os números são diferentes e ");
        if(num1 > num2){
            printf("o maior número é: %d", num1);
        } else {
            printf("o maior número é: %d", num2);
        }
    }
    
    return 0;
} 