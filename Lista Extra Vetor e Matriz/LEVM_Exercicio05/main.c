/* Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int lerVetor(int nomeVetor[],int tamVetor);
int contarPares(int vetor[],int tamVetor);
int main()
{
    int A[TAM];
    //ler vetor
    printf("Informe os valores do vetor:\n");
    lerVetor(A,TAM);
    //contar quantos valores pares
    printf("Numero de valores pares no vetor informado: %d",contarPares(A,TAM));
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
//funcao para contar valores pares dentro de um vetor
int contarPares(int vetor[], int tamVetor){
    int i, numPares=0;
    for(i=0;i<tamVetor;i++){
        if (vetor[i]%2==0){
            numPares++;
        }
    }
    return numPares;
}
