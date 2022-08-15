#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado;*/
int main()
{
    float A, l;
    printf("Programa para calcular a area de um quadrado\n");
    printf("Lado do quadrado:\n");
    scanf("%f",&l);



    A = l * l ;
    printf("Area do quadrado: %.f (nas unidades correspondentes que foram indicadas as dimensoes)\n",A);

    return 0;
}
