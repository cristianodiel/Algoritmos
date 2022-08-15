#include <stdio.h>
#include <stdlib.h>
/*O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o
peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte
o peso do prato */
int main()
{
    float pesoPrato, precoKilo,valorAPagar;
    precoKilo = 12.00; // em R$
    printf("Digite o peso (em quilos) do prato do cliente:\n");
    scanf("%f",&pesoPrato);
    valorAPagar = precoKilo * pesoPrato;
    printf("O valor a pagar eh R%$ %0.2f. \n",valorAPagar);
    return 0;
}
