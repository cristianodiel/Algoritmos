#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.*/
int main()
{
    float n1, n2, resultado;
    printf("Numero 1:\n");
    scanf("%f",&n1);
    printf("Numero 2:\n");
    scanf("%f",&n2);

    resultado = n1 / n2;
    printf("Numero1 / Numero2 =  %f \n",resultado);
    return 0;
}
