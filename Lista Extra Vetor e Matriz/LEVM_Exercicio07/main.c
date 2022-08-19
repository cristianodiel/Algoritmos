/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posic¸ao que ele se encontra.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int lerVetor(int nomeVetor[],int tamVetor);
int achar_maior(int vetor[], int tamVetor);
int achar_menor(int vetor[], int tamVetor);
int achar_posicao_maior(int vetor[], int tamVetor);
int achar_posicao_menor(int vetor[], int tamVetor);
int main()
{
    int A[TAM];
    printf("Informe os valores do vetor:\n");
    lerVetor(A,TAM);
    printf("O maior valor do vetor eh %d, e se encontra na posicao %d\n",achar_maior(A,TAM),achar_posicao_maior(A,TAM));
    printf("O menor valor do vetor eh %d, e se encontra na posicao %d\n",achar_menor(A,TAM),achar_posicao_menor(A,TAM));
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
//funcao para identificar o maior elemento em um vetor
int achar_maior(int vetor[], int tamVetor){
    int i, aux, maior=vetor[0];
        for (i=0;i<tamVetor;i++){
            if (vetor[i]>maior){
                maior=vetor[i];
            }
        }
    return maior;
}
//funcao para identificar o menor elemento em um vetor
int achar_menor(int vetor[], int tamVetor){
    int i, aux, menor=vetor[0];
        for (i=0;i<tamVetor;i++){
            if (vetor[i]<menor){
                menor=vetor[i];
            }
        }
    return menor;
}

//funcao para identificar a posicao do maior elemento em um vetor
int achar_posicao_maior(int vetor[], int tamVetor){
    int i, aux, posicao_maior=0,maior=vetor[0];
        for (i=0;i<tamVetor;i++){
            if (vetor[i]>maior){
                maior=vetor[i];
                posicao_maior=i;
            }
        }
    return posicao_maior;
}
//funcao para identificar a ´psicao do menor elemento em um vetor
int achar_posicao_menor(int vetor[], int tamVetor){
    int i, aux, posicao_menor=0,menor=vetor[0];
        for (i=0;i<tamVetor;i++){
            if (vetor[i]<menor){
                menor=vetor[i];
                posicao_menor=i;
            }
        }
    return posicao_menor;
}
