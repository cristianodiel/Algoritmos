#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação.   */

int main()
{
    int A;
    printf("Insira um numero inteiro:\n");
    scanf("%i", &A);
    if (A % 2 == 0){
        printf("O numero inserido eh par. %i", A + 5);
    }else {
        printf("O numero inserido eh impar. %i", A + 8);
    }
    return 0;
}
