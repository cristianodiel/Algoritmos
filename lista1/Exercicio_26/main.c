#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses números*/
int main()
{
    float n1, n2, n3, mult;
    printf("Numero 1:\n");
    scanf("%f",&n1);
    printf("Numero 2:\n");
    scanf("%f",&n2);
    printf("Numero 3:\n");
    scanf("%f",&n3);

    mult = n1 * n2 * n3;
    printf("A multiplicacao entre os tres numeros eh: %f \n",mult);
    return 0;
}
