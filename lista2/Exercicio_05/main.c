#include <stdio.h>
#include <stdlib.h>
/*Fa�a um algoritmo que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar, imprimir o resultado desta opera��o.   */

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
