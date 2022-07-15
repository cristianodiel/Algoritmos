/*Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100,
 quantos estão entre 101 e 200 e quantos são maiores de 200.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=20,i=1, aux1=0, aux2=0, aux3=0, numero;

    printf("Algoritmo para identificar quantas dos %i numeros iformados estao entre 0 e 100, quantos estao entre 101 e 200 e quantos sao maiores de 200.\n", n);

    while (i<=n)
    {
        printf("Insira o numero [%i]:\n", i);
        scanf("%i",&numero);

        if ((numero >= 0) && (numero <= 100)){
            aux1 = aux1 + 1;
        }else if ((numero >= 101) && (numero <= 200)){
            aux2 = aux2 + 1;
        }else if (numero > 200) {
            aux3 = aux3 + 1;
        }
        i++;

    }
    printf("Dentre os %i numeros que foram informadas,\n", n);
    printf("existem %i entre 0 e 100, ", aux1);
    printf("%i entre 101 e 200 e ", aux2);
    printf("%i maiores do que 200.\n", aux3);
    return 0;
}
