/*Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa incide sobre o
valor de tabela do carro. Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule e informe o
imposto a ser pago. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    float imposto, valorTabela;
    printf("DETRAN\n");
    printf("Informe o valor de tabela do veiculo\n");
    scanf("%f", &valorTabela);
    printf("Informe o ano do veiculo\n");
    scanf("%i", &ano);
    if (ano < 1990)
        imposto = 0.01*valorTabela;
    else
        imposto = 0.015*valorTabela;

    printf("O valor do imposto sobre o veiculo eh de: %.2f\n",imposto);

    return 0;
}
