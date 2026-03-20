#include <stdio.h>
#define PI 3.1425
// #include <locale.h> <- biblioteca que permite usar a função setlocale para localizar o texto para português

int main() {
    // setlocale(LC_ALL, "portuguese"); <- localiza o texto para português, mas também a vírgula do decimal
    float h, r, v, a; //Declarando variaveis do tipo float
    printf("Bota o valor da altura e do raio de um cilindro ai, cabra safado:\n "); //Função para printar
    scanf("%f %f", &h, &r); //Recebe o input do usuário
    a = 2*PI*r* (h+r); //Cálculo da área do cilindro
    v = PI*r*r*h; //Cálculo do volume do cilindro
    printf("O valor do teu raio e %.2f\n a altura e %.2f\n o volume e %.2f\n e a area e %.2f", r, h, v, a); //Printa o resultado, com 2 casas decimais
    return 0;
}