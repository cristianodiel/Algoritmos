#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.*/
int main()
{
    float a,b,c;
    printf("Programa para calcular a hipotenusa de um triangulo retangulo\n");
    printf("Informe o valor dos catetos do triangulo:\n");
    scanf("%f",&a);
    scanf("%f",&b);


    c = sqrt(a*a+b*b);
    printf("O valor da hipotenusa do triangulo  eh %.2f\n",c);

    return 0;
}
