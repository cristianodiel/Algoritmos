#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal_maior * diagonal_menor)/2;*/
int main()
{
    float A, d1, d2;
    printf("Programa para calcular a area de um losango\n");
    printf("Diagonal menor:\n");
    scanf("%f",&d1);
    printf("Diagonal maior:\n");
    scanf("%f",&d2);




    A = d1*d2/2 ;
    printf("Area do losango: %.f (nas unidades correspondentes que foram indicadas as dimensoes)\n",A);

    return 0;
}
