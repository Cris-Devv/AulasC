#include <stdio.h>
#include <windows.h>

// Algoritmo para efetuar troca de valores entre variáveis
int main(){

    SetConsoleOutputCP(CP_UTF8);
    
    float a, b, troca;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    troca = a;
    a = b;
    b = troca;
    printf("Os valores de A e B foram trocados: A = %f, B = %f", a, b);

    return 0;
}