/*Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar :
a. A menor altura do grupo;
b. A maior altura do grupo;
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=15;
    float vetor[n],maior,menor;
    for (i=0;i<n;i++){
        printf("insira a altura da pessoa %i:\n",i+1);
        scanf("%f",&vetor[i] );
    }
    menor = vetor[0];
    maior = vetor[0];
    for (i=0;i<n;i++){
            if (vetor[i]<menor){
                menor = vetor[i];
            }
            if (vetor[i]>maior){
                maior = vetor[i];
            }
    }
    printf("Das alturas apresentadas, a menor eh %.2f e o maior eh %.2f", menor, maior);
    return 0;
}

