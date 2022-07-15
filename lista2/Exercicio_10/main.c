#include <stdio.h>
#include <stdlib.h>
/*Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo
menor; */

int main()
{
    int A, B;
    printf("Insira o primeiro numero inteiro:\n");
    scanf("%i", &A);
    printf("Insira o segundo numero inteiro:\n");
    scanf("%i", &B);
    if (A > B){
        printf("A eh maior que B. A diferenca entre eles eh: %i", (A-B));
    }else if (B > A){
        printf("B eh maior que A. A diferenca entre eles eh: %i", (B-A));
    }else{
        printf("A e B, possuem o mesmo valor. A diferenca entre eles eh nula.");
    }
    return 0;
}
