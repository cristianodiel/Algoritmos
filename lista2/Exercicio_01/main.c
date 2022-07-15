#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que leia dois valores A e B e imprima o maior deles. */

int main()
{
    float A, B;
    printf("Insira o valor de A:\n");
    scanf("%f", &A);
    printf("Insira o valor de B:\n");
    scanf("%f", &B);
    if (A > B){
        printf("A eh maior que B, e vale %f", A);
    }else if (B > A){
        printf("B eh maior que A, e vale %f", B);
    }else{
        printf("A e B, possuem o mesmo valor: %f", A);
    }
    return 0;
}
