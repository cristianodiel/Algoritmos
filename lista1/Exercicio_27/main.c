#include <stdio.h>
#include <stdlib.h>
/*Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o � necess�rio se preocupar com valida��es.*/
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
