#include <stdio.h>
#include <stdlib.h>
/*Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e
mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.*/
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
