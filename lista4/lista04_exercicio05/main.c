#include <stdio.h>
#include <stdlib.h>
/*. Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
a) a soma de elementos armazenados neste vetor que são inferiores a 15;
b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
c) a média dos elementos armazenados no vetor que são superiores a 15. */

int main()
{
    int i,n=10,somamenor15=0, numigual15=0,somamaior15=0,nummaior15=0, mediamaior15=0, A[n];
    for(i=0;i<n;i++){
        printf("A[%i]=\n",i);
        scanf("%i",&A[i]);
        if (A[i]<15){
            somamenor15 = somamenor15 + A[i];
        } else if (A[i]==15){
            numigual15 = numigual15 + 1;
        } else{
            somamaior15 = somamaior15 + A[i];
            nummaior15 = nummaior15 + 1;
            mediamaior15 = somamaior15/nummaior15;
        }
    }

    printf("A soma de elementos armazenados neste vetor que são inferiores a 15 e %i.\n",somamenor15);
    printf("A quantidade de elementos armazenados no vetor que sao iguais a 15 e %i.\n",numigual15);
    printf("A media dos elementos armazenados no vetor que sao superiores a 15 e %i.\n",mediamaior15);


    return 0;
}
