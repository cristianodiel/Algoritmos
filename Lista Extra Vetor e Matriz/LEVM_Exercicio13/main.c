/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon- ˜
tram o maior e o menor valor.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int lerVetor(int nomeVetor[],int tamVetor);
int achar_posicao_maior(int vetor[], int tamVetor);
int achar_posicao_menor(int vetor[], int tamVetor);


int main()
{
    int vet[TAM];
    //ler vetor
    lerVetor(vet,TAM);

    //mostrar a posicao do maior valor
    printf("Posicao do maior valor no vetor: %d\n", achar_posicao_maior(vet, TAM));

    //mostrar a posicao do menor valor
    printf("Posicao do menor valor no vetor: %d\n", achar_posicao_menor(vet, TAM));

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
//funcao para identificar a posicao do menor elemento em um vetor
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
