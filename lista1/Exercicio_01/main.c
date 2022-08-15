#include <stdio.h>
#include <stdlib.h>
//A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um
//terreno e depois exibir a área do terreno.
int main()
{
    float dimensao1, dimensao2, area;
    printf("Digite a primeira dimensao do terreno\n");
    scanf("%f",&dimensao1);
    scanf("%f",&dimensao2);
    area = dimensao1 * dimensao2;
    printf("A area do terreno sera de %.2f metros quadrados\n",area);
    return 0;

}
