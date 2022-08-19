/*Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int lerVetor(int nomeVetor[],int tamVetor);
int lerValor(int nome_da_variavel);
int somaValores(int x, int y);
int main()
{
    int A[TAM],x,y,SOMA;
    //ler vetor
    lerVetor(A,TAM);
    //ler pocicao x
    printf("Informe a posicao de X:");
    x = lerValor (x);
    //ler posicao y
    printf("Informe a posicao de Y:");
    y = lerValor (y);
    //soma das posicoes X e Y
    printf("A soma dos valores nas posicoes %d e %d eh: %d",x,y,somaValores(A[x],A[y]));

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
//funcao para ler variavel
int lerValor(int nome_da_variavel){
    int valor_da_variavel;
    scanf("%d",&valor_da_variavel);
    printf ("variavel=%d\n",valor_da_variavel);
    return valor_da_variavel;
}
//funcao para somar duas variaveis
int somaValores(int x, int y){
    int soma;
    soma = x+y;
    return soma;
}
