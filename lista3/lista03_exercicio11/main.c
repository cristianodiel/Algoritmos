/*Fa�a um algoritmo que leia 20 n�meros e, ao final, escreva quantos est�o entre 0 e 100.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=20,i=1, aux=0, numero;

    printf("Algoritmo para identificar quantas dos %i numeros estao entre 0 e 100.\n", n);

    while (i<=n)
    {
        printf("Insira o numero [%i]:\n", i);
        scanf("%i",&numero);

        if ((numero > 0) && (numero < 100)){
            aux = aux + 1;
        }
        i++;

    }


    printf("Dentre os %i numeros que foram informadas, existem %i entre 0 e 100. \n", n, aux);

    return 0;
}
