#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.  */

int main()
{
    int A;
    printf("Insira um numero inteiro:\n");
    scanf("%i", &A);
    if (A % 2 == 0){
        printf("O numero inserido eh par.");
    }else {
        printf("O numero inserido eh impar.");
    }
    return 0;
}
