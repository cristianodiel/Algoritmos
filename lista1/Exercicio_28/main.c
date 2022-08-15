#include <stdio.h>
#include <stdlib.h>
/*. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira nota e peso 3 para a segunda nota*/
int main()
{
    float n1, n2, media;
    printf("Nota 1:\n");
    scanf("%f",&n1);
    printf("Nota 2:\n");
    scanf("%f",&n2);

    media = (2* n1 + 3 * n2)/(2 + 3);
    printf(" media =  %.1f \n",media);
    return 0;
}
