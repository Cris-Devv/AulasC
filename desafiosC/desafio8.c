#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);

    const float salario;
    float vendas;
    printf("Digite o valor do seu salário mensal: ");
    scanf("%f", &salario);
    printf("Digite o valor total das suas vendas este mês: ");
    scanf("%f", &vendas);
    printf("O valor fixo do seu salário é: R$ %.2f\nJá o valor do seu salario + sua comissão é: R$ %.2f", salario, salario + (vendas*0.15));

    return 0;
}