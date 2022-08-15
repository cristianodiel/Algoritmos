#include <stdio.h>
#include <stdlib.h>
/*João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça
um algoritmo que calcule e mostre quanto restará do salário do João*/
int main()
{
    float salario, c1, c2, multa1, multa2, salario_restante;
    salario = 1200;//em R$
    c1 = 200;
    c2 = 120;
    multa1 = 0.02 * c1;
    multa2 = 0.02 * c2;
    salario_restante = salario - (c1 + multa1 + c2 + multa2);

    printf("Apos pagas as contas e as multas, restara R%$%.2f do salario de Joao\n",salario_restante);

    return 0;
}
