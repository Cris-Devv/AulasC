#include <stdio.h>
#include <windows.h>

// Algoritmo para transcrever centímetros para polegadas.
int main(){

    SetConsoleOutputCP(CP_UTF8);

    float n1;
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("%.2fcm é igual a %.2fpol.", n1, n1/2.54);
    
    return 0;
}