#include <stdio.h>
#include <stdlib.h>
/*Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
após a retirada dos nulos e negativos.*/

int main()
{
    int i,j,n=10,D[n],E[n];
    for(i=0;i<n;i++){
        printf("D[%i]=\n",i);
        scanf("%i",&D[i]);
    }
    for(i=0;i<n;i++){

            if(D[i]>0){
            E[j]=D[i];
            j=j+1;

        }

    }
    printf("O vetor D sem seus numeros negativos ou zeros se reduz a:\n D = \n");
    for(i=0;i<j;i++){
        printf("[%i] ",E[i]);
    }

    return 0;
}
