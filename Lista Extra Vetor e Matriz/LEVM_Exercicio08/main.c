/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int lerVetor(int nomeVetor[],int tamVetor);
int main()
{
    int A[TAM],i;
    printf("Informe %d valores:\n",TAM);
    lerVetor(A,TAM);
    printf("Na ordem inversa, os valores informados, sao:\n");
    for(i=TAM-1;i>=0;i--){
        printf("%d\n",A[i]);
    }
    return 0;
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

