/*1. Fac¸a um programa que possua um vetor denominado A que armazene 6 numeros intei- ´
ros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic¸ ´ oes ˜
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int main()
{
    //(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    int A[]={1,0,5,-2,-5,7};

    //(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic¸ ´ oes ˜
    int soma=0,i;
    for (i=0;i<TAM;i++){
            if (i==0||i==1||i==5)
                soma=soma+A[i];
    }
    printf("Soma: %d\n", soma);

    //(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
    A[4]=100;

    //(d) Mostre na tela cada valor do vetor A, um em cada linha.
    for (i=0;i<TAM;i++){
        printf("A[%d]=%d\n",i,A[i]);
    }
    return 0;
}
