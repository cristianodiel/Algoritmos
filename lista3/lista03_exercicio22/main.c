/* Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quilômetro 0 até
ultrapassar o quilômetro 4000, parando em várias cidades durante o
percurso. Crie um algoritmo que, em cada cidade que o viajante parar, leia a
informação da quilometragem percorrida e adicione ao valor da quilometragem total.
Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
ultrapassar os 4000 km */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilometragem_total=0,max=4000, percorrida;


    while (quilometragem_total<max) {
        printf("Informe a quilometragem percorrida desde a ultima cidade:\n");
        scanf("%f",&percorrida);
        quilometragem_total=quilometragem_total + percorrida;
        printf("Distancia percorrida ate agora: %.f km\n",quilometragem_total);
    }
    printf("Distancia percorrida igual ou superior a %.f km\n",max);



    return 0;
}
