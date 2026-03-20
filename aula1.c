#include <stdio.h>

int main()
{
    char nome[30];
    int idade;
    printf("Bota teu nome e tua idade aí: ");
    scanf("%s %d", &nome, &idade);
    printf("Fala tu, %s que tem idade de %d!", nome, idade);
    return 0;
}