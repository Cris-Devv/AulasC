#include <stdio.h>
#include <windows.h>

// Algoritmo para calcular e mostrar o preço final de um carro unido a 45% de impostos e 28% de lucro do revendedor
int main(){

    SetConsoleOutputCP(CP_UTF8);

    float precoFabrica;
    printf("Insira o preço de fábrica do carro: ");
    scanf("%f", &precoFabrica);
    printf("O preço final do carro é: R$ %.2f", precoFabrica + (precoFabrica*0.45) + precoFabrica*0.28);
    
    return 0;
}