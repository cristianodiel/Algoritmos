/*Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores ˆ
lidos na ordem inversa.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int lerVetor(int nomeVetor[],int tamVetor);
int main()
{
    int A[TAM],i;
    printf("Informe %d valores pares:\n",TAM);
    lerVetor(A,TAM);
    printf("Na ordem inversa, os valores informados, sao:\n");
    for(i=TAM-1;i>=0;i--){
        printf("%d\n",A[i]);
    }
    return 0;
}
//funcao para ler vetor de valores inteiros pares
int lerVetor(int nomeVetor[],int tamVetor){
    int i;
    for(i=0;i<tamVetor;){
        printf("Informe Vetor[%d]:",i);
        scanf("%d",&nomeVetor[i]);
        if (nomeVetor[i]%2==0){
            i++;
        }else{
        printf("Por favor insira apenas numeros pares.\n");
        }
    }
    return nomeVetor;
}
