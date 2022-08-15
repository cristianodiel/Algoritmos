#include <stdio.h>
#include <stdlib.h>
/*Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X.
*/

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
    printf("Os elementos que estao presentes nos vetores R e S sao:\n X= \n");
    for(i=0;i<k;i++){
        printf("[%i] ",X[i]);
    }

    return 0;
}
