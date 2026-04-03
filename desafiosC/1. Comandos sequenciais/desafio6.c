#include <stdio.h>
#include <windows.h>
#include <math.h>
#define PI 3.14159

// Algoritmo para receber o raio de um círculo e mostrar a área dele.
int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    
    float r;
    printf("Digite o raio do círculo: ");
    scanf("%f", &r);
    printf("A área do círculo é: %f", PI * pow(r, 2));
    
    return 0;
}