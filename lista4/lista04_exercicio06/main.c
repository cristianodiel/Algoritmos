#include <stdio.h>
#include <stdlib.h>
/*Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um
programa que determine e escreva a menor e a maior idades e suas respectivas posições. */

int main()
{
    int i,n=10,posicao_menor=0,posicao_maior=0,A[n],vetor_maior,vetor_menor;
    for(i=0;i<n;i++){
        printf("A[%i]=\n",i);
        scanf("%i",&A[i]);
    }
        vetor_maior=A[0];
        vetor_menor=A[0];
        for(i=1;i<10;i++)
        if (A[i]>vetor_maior){
            posicao_maior = i;
            vetor_maior = A[i];
        }
        for(i=1;i<10;i++)
        if (A[i]<vetor_menor){
            posicao_menor = i;
            vetor_menor = A[i];
        }



    printf("O maior valor informado eh %i e esta em A[%i].\n",vetor_maior,posicao_maior);
    printf("O menor valor informado eh %i e esta em A[%i].\n",vetor_menor,posicao_menor);


    return 0;
}
