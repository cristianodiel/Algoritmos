#include <stdio.h>
#include <stdlib.h>
/* Calcule a área de uma pizza que possui um raio R (pi=3.14).*/
int main()
{
    double R, pi, area;

    printf("Informe o raio da pizza em centimetros:\n");
    scanf("%lf",&R);
    pi = 3.14;
    area = pi * pow(R,2);


    printf("a area da pizza eh de %lf centimetros quadrados\n",area);


    return 0;
}
