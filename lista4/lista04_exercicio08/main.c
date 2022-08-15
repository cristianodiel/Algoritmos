#include <stdio.h>
#include <stdlib.h>
/*Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos contendo uma aposta. A seguir imprima quantos pontos fez o apostador.*/

int main()
{
    int i,j,k=0,nR=5,nS=10,R[nR],S[nS],X[nS];
    for(i=0;i<nR;i++){
        printf("R[%i]=\n",i);
        scanf("%i",&R[i]);
    }
    for(i=0;i<nS;i++){
        printf("S[%i]=\n",i);
        scanf("%i",&S[i]);
    }
    for(i=0;i<nR;i++){
        for(j=0;j<nS;j++){
            if(R[i]==S[j]){
            X[k]=R[i];
            k=k+1;
            }
        }

    }
    printf("A quantidade de elementos que estao presentes nos vetores R e S eh: ");
    //for(i=0;i<k;i++){
        printf("%i.",k);
    //}

    return 0;
}

