/*Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele- ´
mentos repetidos.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int lerVetor(int nomeVetor[],int tamVetor);
void excluirRepetidos (int nomeVetor[],int tamVetor);




int main()
{
    int vet[TAM];
    //ler vetor
    lerVetor(vet,TAM);

    //verificar se existem valores repetidos
    excluirRepetidos (vet,TAM);

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

int estaContido (int nomeVetor[],int tamVetor, int numeroChecado){
    int i, verificador=0;
    for (i=0;i<tamVetor;i++){
        if (nomeVetor[i]==numeroChecado){
            verificador=1;
        }
    }
    return verificador;
}

//funcao para comparar valores
void excluirRepetidos (int nomeVetor[],int tamVetor){
    int i, k, vetAux[tamVetor];
    for (i=0;i<tamVetor;i++){
        if(!estaContido(vetAux,k,nomeVetor[i])){
            vetAux[k]=nomeVetor[i];
            k++;
        }
    }
    printf("Vetor sem elementos repetidos: ");
    for (i=0;i<k;i++){
        printf("%d ",vetAux[i]);
    }
}

