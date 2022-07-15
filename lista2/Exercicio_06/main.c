#include <stdio.h>
#include <stdlib.h>
/*Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.  */

int main()
{
    int A, B, C;
    printf("Insira o valor de A:\n");
    scanf("%i", &A);
    printf("Insira o valor de B:\n");
    scanf("%i", &B);
    printf("Insira o valor de C:\n");
    scanf("%i", &C);
    if ((A == B)||(A == C)||(B == C)){
        printf("Ao menos dois numeros sao iguais. Insira tres numeros diferentes.");
    }else if ((A < B) && (A < C)){
        if (B < C)
            printf("%i, %i, %i", A, B, C);
        else
            printf("%i, %i, %i", A, C, B);
    }else if ((B < A) && (B < C)){
        if (A < C)
            printf("%i, %i, %i", B, A, C);
        else
            printf("%i, %i, %i", B, C, A);
    }else if ((C < A) && (C < B)){
        if (A < B)
            printf("%i, %i, %i", C, A, B);
        else
            printf("%i, %i, %i", C, B, A);
    }
    return 0;
}
