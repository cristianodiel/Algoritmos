/*2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6],i;
    for (i=0;i<6;i++){
        printf("Informe um numero:\n");
        scanf("%d",&A[i]);
    }
    for (i=0;i<6;i++){
        printf("A[%d]=%d\n",i,A[i]);
    }
    return 0;
}
