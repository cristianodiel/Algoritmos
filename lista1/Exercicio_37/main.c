#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário.*/
int main()
{
    int x;
    printf("Tabuada\n");
    printf("Digite o numero para o qual voce quer a tabuada:\n");
    scanf("%i",&x);
    printf("%i X 1 = %i\n",x,(1*x));
    printf("%i X 2 = %i\n",x,(2*x));
    printf("%i X 3 = %i\n",x,(3*x));
    printf("%i X 4 = %i\n",x,(4*x));
    printf("%i X 5 = %i\n",x,(5*x));
    printf("%i X 6 = %i\n",x,(6*x));
    printf("%i X 7 = %i\n",x,(7*x));
    printf("%i X 8 = %i\n",x,(8*x));
    printf("%i X 9 = %i\n",x,(9*x));
    printf("%i X 10 = %i\n",x,(10*x));

    return 0;
}
