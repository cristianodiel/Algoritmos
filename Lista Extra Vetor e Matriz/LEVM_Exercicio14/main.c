/*Fac¸a um programa que leia um vetor de 10 posic¸oes e verifique se existem valores iguais ˜
e os escreva na tela
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int lerVetor(int nomeVetor[],int tamVetor);
void compararVetor (int nomeVetor[],int tamVetor);




int main()
{
    int vet[TAM];
    //ler vetor
    lerVetor(vet,TAM);

    //verificar se existem valores repetidos
    compararVetor (vet,TAM);

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
void compararVetor (int nomeVetor[],int tamVetor){
    int i, j,k, vetAux[tamVetor];
    printf("Valores que aparecem mais que uma vez: ");
    for (i=0;i<tamVetor;i++){
        for (j=0;(j<tamVetor&&i!=j);j++){

            if(nomeVetor[i]==nomeVetor[j]&&!estaContido(vetAux,k,nomeVetor[i])){

                vetAux[k]=nomeVetor[i];
                k++;
            printf("%d ", nomeVetor[i]);
            }
        }
    }
}
