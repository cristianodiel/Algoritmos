#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�s o aumento, desconte 8%
de impostos. Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final. */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    double salInicial, salAumento, salFinal;

    printf("Informe o sal�rio do funcion�rio:\n");
    scanf("%d",&salInicial);

    salAumento = salInicial + 0.15 * salInicial;//aumento de 15%
    salFinal = salAumento - 0.08 * salAumento;//descontado 8% de imposto

    printf("O sal�rio inicial do funcion�rio � de R$ %.2d \n",salInicial);
    printf("O sal�rio com aumento de 15%% � de R$ %.2d \n",salAumento);
    printf("O sal�rio final do  funcion�rio � de R$ %.2d \n",salFinal);
    return 0;
}
