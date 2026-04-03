#include <stdio.h>
#include <windows.h>

// algoritmo para mostrar quantidade de cédulas que um cliente receberá ao fazer um saque em um caixa eletrônico, de forma que o número de cédulas seja o menor possível.
int main(){

    SetConsoleOutputCP(CP_UTF8);

    // int saque, cedulas[6] = {100, 50, 20, 10, 5, 2};
    // printf("Digite o quanto você deseja sacar: ");
    // scanf("%i", &saque);

    // printf("Você receberá as seguintes cédulas: \n");
    // for(int i = 0; i < 6; i++){
    //     int quantidade = saque / cedulas[i];
    //     if(quantidade > 0){
    //         printf("%i cédula(s) de R$%i\n", quantidade, cedulas[i]);
    //         saque -= quantidade * cedulas[i];
    //     }
    // }

    // return 0;

    int saque, c100, c50, c20, c10, c5, c2;
    printf("Digite o quanto você deseja sacar: ");
    scanf("%i", &saque);

    if (saque < 4) {
        printf("Valor inválido para saque. O valor deve ser maior que 4.\n");
        return 1;
    }

    c100 = saque/100;
    saque %= 100;
    c50 = saque/50;
    saque %= 50;
    c20 = saque/20;
    saque %= 20;
    c10 = saque/10;
    saque %= 10;
    if (saque % 2 != 0){
        c5 = saque/5;
        saque %= 5;
    } else {
        c2 = saque/2;
    }
    


    printf("Você receberá as seguintes cédulas: \n");
    if(c100 > 0){
        printf("%i cédula(s) de R$100\n", c100);
    }
    if(c50 > 0){
        printf("%i cédula(s) de R$50\n", c50);
    }
    if(c20 > 0){
        printf("%i cédula(s) de R$20\n", c20);
    }
    if(c10 > 0){
        printf("%i cédula(s) de R$10\n", c10);
    }
    if(c5 > 0){
        printf("%i cédula(s) de R$5\n", c5);
    }
    if(c2 > 0){
        printf("%i cédula(s) de R$2\n", c2);
    }

    return 0;
}