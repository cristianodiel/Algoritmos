#include <stdio.h>
#include <stdlib.h>
/*Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C
é a soma dos respectivos elementos em A e B, ou seja:
C[i] = A[i] + B[i]. */

int main()
{
    int i,n=10,A[n], B[n], C[n];
    for(i=0;i<n;i++){
        printf("A[%i]=\n",i);
        scanf("%i",&A[i]);
    }
    for(i=0;i<n;i++){
        printf("B[%i]=\n",i);
        scanf("%i",&B[i]);
    }
    printf("o vetor resultado da soma e:");
    for(i=0;i<n;i++){
        C[i]=A[i]+B[i];
        printf("[%i] ",C[i]);
    }
    return 0;
}
