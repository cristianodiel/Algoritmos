#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia dois vetores de 10 posi��es e fa�a a soma dos elementos de mesmo �ndice,
colocando o resultado em um terceiro vetor. Mostre o vetor resultante. */
int main()
{
    int i,n=10,vet1[n], vet2[n], vet3[n];
    for(i=0;i<n;i++){
        printf("vet1[%i]=\n",i);
        scanf("%i",&vet1[i]);
    }
    for(i=0;i<n;i++){
        printf("vet2[%i]=\n",i);
        scanf("%i",&vet2[i]);
    }
    printf("o vetor resultado da soma e:");
    for(i=0;i<n;i++){
        vet3[i]=vet1[i]+vet2[i];
        printf("[%i] ",vet3[i]);
    }
    return 0;
}
