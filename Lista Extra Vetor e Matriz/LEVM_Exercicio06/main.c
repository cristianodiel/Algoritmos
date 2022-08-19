/*Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida dever ˜ a´
ser impresso o maior e o menor elemento do vetor.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int lerVetor(int nomeVetor[],int tamVetor);
int achar_maior(int vetor[], int tamVetor);
int achar_menor(int vetor[], int tamVetor);
int main()
{
    int A[TAM];
    printf("Informe os valores do vetor:\n");
    lerVetor(A,TAM);
    printf("Maior valor do vetor: %d\n",achar_maior(A,TAM));
    printf("Menor valor do vetor: %d\n",achar_menor(A,TAM));
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
