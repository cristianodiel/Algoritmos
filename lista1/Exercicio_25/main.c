#include <stdio.h>
#include <stdlib.h>
/*Calcule o volume de uma caixa d'água cilíndrica.*/
int main()
{
    float h, r, v;
    printf("Informe a altura do cilindro (em metros):\n");
    scanf("%f",&h);
    printf("Informe o raio da area circular da caixa dagua (em metros):\n");
    scanf("%f",&r);

    v = (3.14159 * r * r) * h;
    printf("O volume da caixa dagua eh %f metros cubicos \n",v);
    return 0;
}
