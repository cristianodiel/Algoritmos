#include <stdio.h>
#include <stdlib.h>
/*Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.  */

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
