/* Leia a idade de 20 pessoas e exiba a média das idades.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=20,i=1;
    float numero[20], soma=0, media;
    printf("Algoritmo para calcular a media de idade de 20 pessoas\n");

    while (i<=n)
    {
        printf("Insira a idade da pessoa [%i] (em anos)\n", i);
        scanf("%f",&numero[i]);
        printf("idade[%i]=%.1f\n", i, numero[i]);
        soma = soma + numero[i];
        i++;

    }
    media = soma/n;

    printf("a media das idades informadas eh %.2f anos. \n", media);

    return 0;
}
