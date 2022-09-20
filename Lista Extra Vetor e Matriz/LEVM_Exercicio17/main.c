/*Leia um vetor de 10 posic¸oes e atribua valor 0 para todos os elementos que possu ˜ ´ırem
valores negativos.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int lerVetor(int nomeVetor[],int tamVetor);

int main()
{
    int vet[TAM],i;
    lerVetor(vet,TAM);
    for(i=0;i<TAM;i++){
        if(vet[i]<0)
            vet[i]=0;
    }
    //imprime vetor
    for(i=0;i<TAM;i++){
        printf("%d ", vet[i]);
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
