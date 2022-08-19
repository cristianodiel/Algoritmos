/* Fac¸a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int lerVetor(int nomeVetor[],int tamVetor);
int calcularMedia(int Vetor[],int tamVetor);

int main()
{
    int notas[TAM];
    //ler vetor
    printf("Informe as notas dos 15 alunos.\n");
    lerVetor(notas,TAM);
    //calcular media
    printf("Media:%d\n",calcularMedia(notas,TAM));
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


//funcao para calcular media dos termos de um vetor
int calcularMedia(int Vetor[],int tamVetor){
    int i,soma=0,media;
    for(i=0;i<tamVetor;i++){
        soma=soma+Vetor[i];
    }
    media=soma/tamVetor;
    return media;
}
