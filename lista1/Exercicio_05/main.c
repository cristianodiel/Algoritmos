#include <stdio.h>
#include <stdlib.h>
/*Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque. */
int main()
{
    float precoGas,litrosGas,valorPago;
    printf("Digite valor (em reais) que deseja abastecer:\n");
    scanf("%f",&valorPago);
    printf("Digite o custo do litro de gasolina (em reais)\n");
    scanf("%f",&precoGas);
    litrosGas = valorPago / precoGas;
    printf("O total de combustivel que pode ser comprado eh %0.3f litros de gasolina\n",litrosGas);
    return 0;
}
