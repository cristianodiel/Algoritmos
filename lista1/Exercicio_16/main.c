#include <stdio.h>
#include <stdlib.h>
/* A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma
fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas,
faça um algoritmo em que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne
necessários para compra. */
int main()
{
    int numSanduiches;
    float pesoQueijo, pesoPresunto, pesoHamburguer;

    printf("Informe o numero de sanduiches a serem feitos:\n");
    scanf("%i",&numSanduiches);
    pesoQueijo = 2 * 0.050 * numSanduiches;
    pesoPresunto = 1 * 0.050 * numSanduiches;
    pesoHamburguer = 1 * 0.100 * numSanduiches;

    printf("Sao necessarios %.3f quilos de queijo. \n",pesoQueijo);
    printf("Sao necessarios %.3f quilos de presunto. \n",pesoPresunto);
    printf("Sao necessarios %.3f quilos de carne. \n",pesoHamburguer);


    return 0;
}
