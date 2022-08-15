#include <stdio.h>
#include <stdlib.h>
/*Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado – use o método de ordenação que preferir.*/

int main()
{
    int i,j,n=10,A[n],inicio=0;
    int min, aux;
    for(i=0;i<n;i++){
        printf("A[%i]=\n",i);
        scanf("%i",&A[i]);
    }
    for(inicio=0;inicio<n;inicio++){
        //encontrando a posicao onde que possui o menor valor do vetor
        min=inicio;
        for(j=inicio+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
        //trocando a posicao inicio pela posicao que contem o menor valor do vetor
        aux=A[inicio];
        A[inicio]=A[min];
        A[min]=aux;
    }

    printf("O vetor ordenado fica:\n");
    for(i=0;i<n;i++){
       printf("[%i] ",A[i]);
    }

    return 0;
}
