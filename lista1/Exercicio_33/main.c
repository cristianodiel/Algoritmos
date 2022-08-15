#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior + base menor)* altura)/2 ;*/
int main()
{
    float A, b1, b2, h;
    printf("Programa para calcular a area de um trapezio\n");
    printf("altura do trapezio:\n");
    scanf("%f",&h);
    printf("base maior do trapezio:\n");
    scanf("%f",&b1);
    printf("base menor do trapezio:\n");
    scanf("%f",&b2);


    A = (b1+b2)*h/2;
    printf("Area do trapezio: %.f (nas unidades correspondentes que foram indicadas as dimensoes do trapezio)\n",A);

    return 0;
}
