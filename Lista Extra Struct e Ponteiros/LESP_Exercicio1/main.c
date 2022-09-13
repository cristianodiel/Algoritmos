/*Suponha que criamos uma estrutura para armazenar produtos de um supermercado:
struct Produto{
char nome[80];
double preco;
int quantidade;
};
Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve o vetor
ordenado pela quantidade de itens no estoque. Funções void ordenaPreco(struct Produto vet[], int
n) e void ordenaQuant(struct Produto vet[], int n).*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

struct Produto{
char nome[80];
double preco;
int quantidade;
};

void ordenaPreco(struct Produto vet[], int n);
void ordenaQuant(struct Produto vet[], int n);


int main()
{
    int i;
    struct Produto produto[TAM];
    for(i=0;i<TAM;i++){
        produto[i].preco=2*i;
        produto[i].quantidade=i+3;
    }
    ordenaPreco(produto, TAM);
    printf("Precos ordenados de forma crescente:");
    for (i=0;i<TAM;i++){
        printf("%lf ", produto[i].preco);
    }
    ordenaQuant(produto, TAM);
    printf("Quantidades ordenadas de forma crescente:");
    for (i=0;i<TAM;i++){
        printf("%d ", produto[i].quantidade);
    }
    return 0;
}
void ordenaPreco(struct Produto vet[], int n){
    int i;
    struct Produto min = vet[0], aux;
    for(i=1;i<n-1;i++){
        aux= vet[i];
        if(vet[i].preco<min.preco){
            min=vet[i];
        }
        vet[i]=min;
        vet[i+1]=aux;
    }
}
void ordenaQuant(struct Produto vet[], int n){
        int i;
    struct Produto min = vet[0], aux;
    for(i=1;i<n-1;i++){
        aux= vet[i];
        if(vet[i].quantidade<min.quantidade){
            min=vet[i];
        }
        vet[i]=min;
        vet[i+1]=aux;
    }
}
