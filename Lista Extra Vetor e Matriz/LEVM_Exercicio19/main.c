/*Faca um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 * i)%(i+ 1), sendo
i a posicao do elemento no vetor. Em seguida imprima o vetor na tela. */
#include <stdio.h>
#include <stdlib.h>
#define TAM 50

int main()
{
    int vet[TAM];
    for(int i=0;i<TAM;i++){
        vet[i]=(i + 5 * i)%(i+ 1);
    }
    for(int i=0;i<TAM;i++){
        printf("vet[%d]=%d\n",i,vet[i]);
    }

    return 0;
}
