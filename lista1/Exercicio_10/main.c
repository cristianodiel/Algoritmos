#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par
ordenado (x,y). */
int main()
{
    double x1, y1, x2, y2, distancia1, distancia2, distancia;

    printf("Informe a coordenada x do ponto 1:\n");
    scanf("%lf",&x1);
    printf("Informe a coordenada y do ponto 1:\n");
    scanf("%lf",&y1);
    printf("Informe a coordenada x do ponto 2:\n");
    scanf("%lf",&x2);
    printf("Informe a coordenada y do ponto 2:\n");
    scanf("%lf",&y2);


    distancia1 = sqrt(pow(x1,2) + pow(y1,2));
    distancia2 = sqrt(pow(x2,2) + pow(y2,2));
    distancia = abs(distancia2 - distancia1);

    printf("A distancia do ponto 1 ao eixo 0 do plano cartesiano eh: %.2lf\n",distancia1);
    printf("A distancia do ponto 2 ao eixo 0 do plano cartesiano eh: %.2lf\n",distancia2);
    printf("A distancia entre o ponto 2 e o ponto 1 eh: %.2lf\n",distancia);

    return 0;
}
