/*Escreva um algoritmo que leia 10 números informados pelo usuário e calcule a soma desses
números*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10,i=1;
    int numero[10], soma=0;
    printf("Algoritmo para calcular a soma de 10 numeros\n");

    while (i<=n)
    {
        printf("Insira x[%i]\n", i);
        scanf("%i",&numero[i]);
        printf("x[%i]=%i\n", i, numero[i]);
        soma = soma + numero[i];
        i++;

    }
    printf("a somatoria dos %i numeros informados eh %i\n", n, soma);

    return 0;
}
