/*Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado
pelo usuário. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    int aux=1;
    printf("Informe um numero para que seja calculado seu fatorial.\n");
    scanf("%i",&n);

    //for(i=0;i<n;i++){
    //    aux = aux * i;
    //}
    while (i<=n){
        aux = aux * i;
        i = i + 1;

    }


    printf("O fatorial de %i eh %i.\n",n, aux);
    return 0;
}
