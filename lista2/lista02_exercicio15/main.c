/*Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo.
Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo salário.
Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o
salário antigo, o novo salário e a diferença.
Código Cargo Percentual
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30%*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioAntigo, salarioNovo;
    int codigo;
    printf("Tabela de salarios:\n");
    printf("Codigo Cargo      Percentual\n");
    printf("   101 Gerente        10%%\n");
    printf("   102 Engenheiro     20%%\n");
    printf("   103 Tecnico        30%%\n");


    printf("Informe o salario do funcionario\n");
    scanf("%f", &salarioAntigo);
    printf("Informe codigo do cargo do funcionario\n");
    scanf("%i", &codigo);

    if (codigo==101)
        salarioNovo = salarioAntigo * (1+0.1);
    else if (codigo==102)
        salarioNovo = salarioAntigo * (1+0.2);
    else if (codigo==103)
        salarioNovo = salarioAntigo * (1+0.3);
    else{
        salarioNovo = salarioAntigo * (1+0.4);
        printf("O codigo informado nao esta presente na tabela. O aumento eh de 40%%.\n",salarioAntigo);

        }

    printf("O salario antigo do funcionario eh R$ %.2f.\n",salarioAntigo);
    printf("O novo salario do funcionario eh R$ %.2f.\n",salarioNovo);
    printf("a diferenca entre os salarios novo e antigo eh de R$ %.2f.\n",(salarioNovo - salarioAntigo));
    return 0;
}
