/*Fac¸a um programa que leia um vetor de 5 posic¸oes para n ˜ umeros reais e, depois, um ´
codigo inteiro. Se o c ´ odigo for zero, finalize o programa; se for 1, mostre o vetor na ordem ´
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 ´
escreva uma mensagem informando que o codigo ´ e inv ´ alido*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int lerVetor(int nomeVetor[],int tamVetor);

int main()
{
    int vet[TAM],n,i;
    lerVetor(vet,TAM);
    printf("Digite:\n");
    printf("1 para mostrar o vetor na ordem direta;\n");
    printf("2 para mostrar o vetor na ordem inversa;\n");
    printf("0 para finalizar o programa.\n");
    scanf("%d",&n);

    switch(n){
    case 0:{
    printf("Programa finalizado");
    break;
    }
    case 1:{
        for (i=0;i<TAM;i++){
            printf("%d ", vet[i]);
        }
        break;
    }
    case 2:{
        for (i=TAM-1;i>=0;i--){
            printf("%d ", vet[i]);
        }
        break;
    }
    default:
    printf("Codigo invalido");
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
