/*Fac¸a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a ´
quantidade de numeros negativos e a soma dos n ´ umeros positivos desse vetor. */
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int lerVetor(int nomeVetor[],int tamVetor);
int contar_negativos(int Vetor[],int tamVetor);
int somar_positivos(int Vetor[],int tamVetor);

int main()
{
    int A[TAM];

    //ler vetor
    lerVetor(A,TAM);

    //contar numeros negativos
    printf("Quantidade de numeros impares: %d\n",contar_negativos(A,TAM));

    //somar numeros positivos

    printf("Soma dos numeros positivos informados: %d\n",somar_positivos(A,TAM));
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

//funcao para contar numeros negativos
int contar_negativos(int Vetor[],int tamVetor){
    int i,num_impares=0;
    for(i=0;i<tamVetor;i++){
        if (Vetor[i]%2==1){
            num_impares++;
        }
    }
    return num_impares;
}

//funcao para somar numeros positivos
int somar_positivos(int Vetor[],int tamVetor){
    int i,soma=0, media;
    for(i=0;i<tamVetor;i++){
        if (Vetor[i]%2==0){
            soma=soma+Vetor[i];
        }
        //media=soma/tamVetor;
    }
    return soma;
}
