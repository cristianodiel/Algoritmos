#include <stdio.h>
#include <stdlib.h>
/*. Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
caso contrário multiplique A por B. Ao final, apresente o resultado.  */

int main()
{
    float A, B;
    printf("Insira o valor de A:\n");
    scanf("%f", &A);
    printf("Insira o valor de B:\n");
    scanf("%f", &B);
    if (A == B){
        printf("Os numeros sao iguais. Sua soma eh %f", (A + B));
    }else{
        printf("Os numeros sao diferentes. Sua multiplicacao eh %f", (A * B));
    }
    return 0;
}
