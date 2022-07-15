/*Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são
pares*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=20,i=1, pares=0, numero[20];

    printf("Algoritmo para identificar quantas dos %i numeros sao pares.\n", n);

    while (i<=n)
    {
        printf("Insira o numero [%i]:\n", i);
        scanf("%i",&numero[i]);

        if (numero[i]%2 == 0){
            pares = pares + 1;
        }
        i++;

    }


    printf("Dentre os %i numeros que foram informadas, existem %i pares. \n", n, pares);

    return 0;
}
