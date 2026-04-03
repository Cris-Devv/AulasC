#include <stdio.h>
#include <windows.h>

// Algoritmo para auxiliar caixa de supermercado, mostrando o valor para o troco do cliente
int main(){

    SetConsoleOutputCP(CP_UTF8);

    float compra, pagamento, troco, dinheiro[12] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
    printf("Digite o valor da compra: ");
    scanf("%f", &compra);
    printf("Digite o quanto será pago: ");
    scanf("%f", &pagamento);

    while(pagamento < compra){
        printf("Valor insuficiente para pagamento. Insira um novo valor: ");
        scanf("%f", &pagamento);
    }

    troco = pagamento - compra;
    printf("O valor do troco é: R$ %.2f\n", troco);
    printf("O troco pode ser dado da seguinte forma: \n");
    for(int i = 0; i < 12; i++){
        int quantidade = troco/dinheiro[i];
        if(quantidade > 0){
            printf("%i %s de R$ %.2f\n", quantidade, (dinheiro[i] > 1) ? "nota(s)" : "moeda(s)", dinheiro[i]);
            troco -= quantidade * dinheiro[i];
        }
    }

    return 0;
}