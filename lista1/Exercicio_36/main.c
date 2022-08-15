#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
mostre a quantidade de salários mínimos que ganha esse funcionário.*/
int main()
{
    float salario_minimo, salario_funcionario, num_salarios;

    printf("Valor do salario minimo:\n");
    scanf("%f",&salario_minimo);
    printf("Salario do funcionario:\n");
    scanf("%f",&salario_funcionario);

    num_salarios = salario_funcionario / salario_minimo;
    printf("O funcionario recebe %.1f salarios minimos)\n",num_salarios);

    return 0;
}
