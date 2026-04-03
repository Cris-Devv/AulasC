#include <stdio.h>
#include <windows.h>

// Algoritmo que mostra o sinal inverso de um número inteiro negativo
int main(){

    SetConsoleOutputCP(CP_UTF8);

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num < 0){
        printf("O número digitado foi o: %d", -num);
    } else {
        printf("O número digitado foi o: %d", num);
    }

    return 0;
}