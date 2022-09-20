/*Faca um programa que leia um vetor de 10 numeros. Leia um numero  x. Conte os
multiplos de um numero inteiro  x num vetor e mostre-os na tela.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int lerVetor(int nomeVetor[],int tamVetor);

int main()
{
    int vet[TAM],i,x,j=0,vetAux[TAM];
    lerVetor(vet,TAM);
    printf("Informe o valor de X:\n");
    scanf("%d",&x);

    for(i=0;i<TAM;i++){
        if((vet[i])%x==0){
            vetAux[j]=vet[i];
            j++;
        }
    }
    printf("Dentre os elementos do vetor, os multiplos de x, sao:\n");
    for(i=0;i<j;i++){
        printf("%d ",vetAux[i]);
    }

}

//funcao para ler vetor
int lerVetor(int nomeVetor[],int tamVetor){
    int i;
    for(i=0;i<tamVetor;i++){
        printf("Informe Vetor[%d]:",i);
        scanf("%d",&nomeVetor[i]);
    }
    return nomeVetor;
}
