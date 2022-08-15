#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado*/
int main()
{
    float peso, engordar, emagrecer;
    printf("Peso (em kg):\n");
    scanf("%f",&peso);


    engordar = peso*(1+0.15);
    printf("Caso engorde 15%%, seu novo peso sera de %.2f kg\n",engordar);
    emagrecer = peso*(1-0.20);
    printf("Caso emagreca 20%%, seu novo peso sera de %.2f kg\n",emagrecer);
    return 0;
}
