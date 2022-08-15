#include <stdio.h>
#include <stdlib.h>
/*. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
funcionário.*/
int main()
{
    float salariofixo, comissao, total;
    printf("Salario fixo do funcionario:\n");
    scanf("%f",&salariofixo);
    printf("Valor das vendas do funcionario:\n");
    scanf("%f",&comissao);


    total = salariofixo + 0.04 * comissao;
    printf("salario total do funcionario: R%$%.2f \n",total);
    return 0;
}
