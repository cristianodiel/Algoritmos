/*Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses
números. Encerre a execução quando um número negativo for digitado.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,soma=0;
    printf("programa para calcular o somatorio de uma sequencia de numeros. O programa soh finaliza quando um numero negativo eh informado.\n");
    printf("informe um numero \n");
    scanf("%i",&a);

    do{
        soma = soma + a;
        printf("soma = %d\n",soma);
        printf("informe um numero \n");
        scanf("%i",&a);




    }while (a>=0);
    printf("O somatorio dos numeros informados antes do primeiro numero negativo eh: %i\n", soma);
    return 0;
}
