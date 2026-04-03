#include <stdio.h>
#include <windows.h>

// algoritmo para mostrar quantidade de cédulas que um cliente receberá ao fazer um saque em um caixa eletrônico, de forma que o número de cédulas seja o menor possível.
int main(){

    SetConsoleOutputCP(CP_UTF8);

    int saque, cedulas[6] = {100, 50, 20, 10, 5, 2};
    printf("Digite o quanto você deseja sacar: ");
    scanf("%i", &saque);

    printf("Você receberá as seguintes cédulas: \n");
    for(int i = 0; i < 6; i++){
        int quantidade = saque / cedulas[i];
        if(quantidade > 0){
            printf("%i cédula(s) de R$%i\n", quantidade, cedulas[i]);
            saque -= quantidade * cedulas[i];
        }
    }

    return 0;
}