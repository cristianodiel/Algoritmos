#include <stdio.h>
#include <stdlib.h>
//Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

int main()
{
    int numCavalos, numFerraduras;
    printf("Digite o numero de cavalos\n");
    scanf("%i",&numCavalos);
    numFerraduras = 4 * numCavalos;
    printf("Serao necessarias %i ferraduras para equipar todos os cavalos\n",numFerraduras);
    return 0;
}
