#include <stdio.h>
#include <stdlib.h>
/*Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais.
Construa um algoritmo em que o usu�rio forne�a a quantidade de camisetas
pequenas, m�dias e grandes referentes a uma venda, e a m�quina informe quanto ser� o valor arrecadado. */
int main()
{
    float precoP, precoM, precoG, qtidadeP, qtidadeM, qtidadeG, total;
    precoP = 10;
    precoM = 12;
    precoG = 15;
    printf("Informe o numero de camisetas de tamanho pequeno compradas:\n");
    scanf("%f",&qtidadeP);
    printf("Informe o numero de camisetas de tamanho medio compradas:\n");
    scanf("%f",&qtidadeM);
    printf("Informe o numero de camisetas de tamanho grande compradas:\n");
    scanf("%f",&qtidadeG);
    total = qtidadeP * precoP + qtidadeM * precoM + qtidadeG * precoG ;
    printf("O valor arrecadado eh de R$ %.2f \n",total);
    return 0;
}
