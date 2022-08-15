#include <stdio.h>
#include <stdlib.h>
/*Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho e com os elementos do vetor A multiplicados por 2,
ou seja: B[i] = A[i] * 2. */
int main()
{
    int i,n=8, vetA[n], vetB[n];
    for(i=0;i<n;i++){
        printf("vet[%i]=",i);
        scanf("%i",&vetA[i]);
        vetB[i] = vetA[i] * 2;

    }
    printf("B = ");
    for(i=0;i<n;i++){
        printf("[%i] ",vetB[i]);
    }

    return 0;
}
