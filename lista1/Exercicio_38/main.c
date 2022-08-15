#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a. a idade dessa pessoa em anos;
b. a idade dessa pessoa em meses;
c. a idade dessa pessoa em dias
d. a idade dessa pessoa em semanas.*/
int main()
{
    int ano_nascimento, ano_atual, idade_anos, idade_meses, idade_dias, idade_semanas;

    printf("Ano de nascimento:\n");
    scanf("%i",&ano_nascimento);
    printf("Ano atual:\n");
    scanf("%i",&ano_atual);

    idade_anos = ano_atual - ano_nascimento;
    printf("Idade em anos: %i anos\n",idade_anos);
    idade_meses = idade_anos * 12;
    printf("Idade em anos: %i meses\n",idade_meses);
    idade_dias = idade_anos * 365;
    printf("Idade em anos: %i dias\n",idade_dias);
    idade_semanas = idade_dias / 7;
    printf("Idade em anos: %i semanas\n",idade_semanas);

    return 0;
}
