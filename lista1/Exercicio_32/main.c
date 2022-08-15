#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/
int main()
{
    float peso_kg, peso_g;
    printf("Peso (em kg):\n");
    scanf("%f",&peso_kg);


    peso_g = peso_kg*1000;
    printf("Peso (em g) %.f g\n",peso_g);

    return 0;
}
