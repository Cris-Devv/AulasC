#include <stdio.h>
#include <windows.h>

// Algoritmo que lê quantidade de maçãs compradas e altera o valor baseado em quantas foram compradas
int main(){

    SetConsoleOutputCP(CP_UTF8);

    float macas, preco;
    printf("Bem-vindo à vendinha do seu Zé! Tamo com uma promoção em que cada maçã sai por R$ 0,25 se você comprar 12 ou mais!\n");
    printf("Quantas maçãs você vai levar hoje: ");
    scanf("%f", &macas);

    if(macas >= 12){
        preco = 0.25;
        printf("O total da sua compra deu: R$ %.2f", macas * preco);
    } else {
        preco = 0.30;
        printf("O total da sua compra deu: R$ %.2f", macas * preco);
    }

    return 0;
}