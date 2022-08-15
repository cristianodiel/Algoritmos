#include <stdio.h>
#include <stdlib.h>
/*Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui.
Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui
6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS
*/
int main()
{
    char nome[100];
    int idade, dias;


    printf("Digite a inicial de seu nome (apenas 1 caracter):\n");
    scanf("%s",nome);
    printf("Digite a sua idade, (em numero de anos inteiros):\n");
    scanf("%d",&idade);

    dias = idade * 365;
    printf("%s, voce ja viveu %d dias\n",nome,dias);
    return 0;
}
