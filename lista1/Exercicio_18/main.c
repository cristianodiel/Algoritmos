#include <stdio.h>
#include <stdlib.h>
/*A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Fa�a um algoritmo para calcular e imprimir o sal�rio bruto e o sal�rio l�quido de um determinado funcion�rio. Considere
que o sal�rio l�quido � igual ao sal�rio bruto descontando-se 10% de impostos.*/
int main()
{
    float horaNormal, horaExtra, salarioBruto, salarioLiquido;
    printf("Informe o numero de horas normais trabalhadas pelo funcionario:\n");
    scanf("%f",&horaNormal);
    printf("Informe o numero de horas extras trabalhadas pelo funcionario:\n");
    scanf("%f",&horaExtra);
    salarioBruto = horaNormal * 10 + horaExtra * 15;
    salarioLiquido = salarioBruto * (1-0.10);
    printf("O salario bruto do funcionario eh: %.2f\n", salarioBruto);
    printf("O salario liquido do funcionario eh: %.2f\n", salarioLiquido);
    return 0;
}
