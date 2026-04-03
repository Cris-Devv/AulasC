#include <stdio.h>
#include <windows.h>
#include <math.h>
#define PI 3.14159

// Algoritmo para mostrar a área e volume de um cilindro.
int main(){
    
    SetConsoleOutputCP(CP_UTF8);

    float r, h;
    printf("Digite o raio da base do cilindro: ");
    scanf("%f", &r);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);
    printf("A área do cilindro e seu volume são, respectivamente: %fcm e %fcm", 2 * PI * r * (h+r), PI * pow(r, 2) * h);

    return 0;
}