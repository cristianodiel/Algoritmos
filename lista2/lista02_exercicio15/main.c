/*Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo, conforme a tabela abaixo.
Fa�a um algoritmo que leia o sal�rio e o cargo de um funcion�rio e calcule o novo sal�rio.
Se o cargo do funcion�rio n�o estiver na tabela, ele dever�, ent�o, receber 40% de aumento. Mostre o
sal�rio antigo, o novo sal�rio e a diferen�a.
C�digo Cargo Percentual
101 Gerente 10%
102 Engenheiro 20%
103 T�cnico 30%*/

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
