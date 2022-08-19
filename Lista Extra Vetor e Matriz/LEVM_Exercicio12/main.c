/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int lerVetor(int nomeVetor[],int tamVetor);
void imprime_vetor(int vetor[],int tamVetor);
int achar_maior(int vetor[], int tamVetor);
int achar_menor(int vetor[], int tamVetor);
int somar_vetor(int Vetor[],int tamVetor);

int main()
{
    int A[TAM];

    //ler vetor
    lerVetor(A,TAM);

    //mostrar vetor
    imprime_vetor(A,TAM);

    //mostrar maior
    printf("Maior valor:%d\n",achar_maior(A,TAM));

    //mostrar menor
    printf("Menor valor:%d\n",achar_menor(A,TAM));

    //mostrar media
    printf("Media:%d\n",somar_vetor(A,TAM));
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

//funcao para mostrar vetor
void imprime_vetor(int vetor[],int tamVetor){
    int i;
    for(i=0;i<tamVetor;i++){
        printf("Vetor[%d]:%d\n",i,vetor[i]);
    }
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

//funcao para calcular a media dos valores de um vetor
int somar_vetor(int Vetor[],int tamVetor){
    int i,soma=0, media;
    for(i=0;i<tamVetor;i++){
        soma=soma+Vetor[i];
    }
    media=soma/tamVetor;
    return media;
}
