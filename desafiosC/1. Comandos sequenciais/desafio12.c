#include <stdio.h>
#include <windows.h>

// Algoritmo para mostrar a soma e média entre duas médias
int main(){

    SetConsoleOutputCP(CP_UTF8);

    int media1[3] = {7, 8, 9}, media2[3] = {4, 5, 6};
    float somaMedia1 = (media1[0] + media1[1] + media1[2])/3;
    float somaMedia2 = (media2[0] + media2[1] + media2[2])/3;
    printf("A soma das médias é: %.2f\nJá a média entre as médias é: %.2f", somaMedia1 + somaMedia2, (somaMedia1 + somaMedia2)/2);

    return 0;
}