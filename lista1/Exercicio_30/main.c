#include <stdio.h>
#include <stdlib.h>
/*. Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba
o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
funcion�rio.*/
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
