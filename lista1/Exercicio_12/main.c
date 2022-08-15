#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8%
de impostos. Imprima o salário inicial, o salário com o aumento e o salário final. */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    double salInicial, salAumento, salFinal;

    printf("Informe o salário do funcionário:\n");
    scanf("%d",&salInicial);

    salAumento = salInicial + 0.15 * salInicial;//aumento de 15%
    salFinal = salAumento - 0.08 * salAumento;//descontado 8% de imposto

    printf("O salário inicial do funcionário é de R$ %.2d \n",salInicial);
    printf("O salário com aumento de 15%% é de R$ %.2d \n",salAumento);
    printf("O salário final do  funcionário é de R$ %.2d \n",salFinal);
    return 0;
}
