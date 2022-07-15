#include <stdio.h>
#include <stdlib.h>
/* Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.   */

int main()
{
    float A;
    printf("Insira um numero:\n");
    scanf("%f", &A);

    if (A > 0){
        printf("O numero eh positivo. Seu dobro eh %f", (2 * A));
    }else if (A < 0){
        printf("O numero eh negativo. Seu triplo eh %f", (3 * A));
    }else{
        printf("o numero inserido eh zero.");
    }
    return 0;
}
