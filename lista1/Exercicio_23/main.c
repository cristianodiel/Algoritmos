#include <stdio.h>
#include <stdlib.h>
/*Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa. Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um
algoritmo para ler os dados necess�rios e calcular a altura do pr�dio.   */
int main()
{
    float x1,y1,x2,y2;
    printf("Informe a sua altura:\n");
    scanf("%f",&y1);
    printf("Informe o comprimento da sua sombra:\n");
    scanf("%f",&x1);
    printf("informe o comprimento da sombra do predio:\n");
    scanf("%f",&x2);


    y2 = y1 * x2 / x1;
    printf("A altura do predio eh %.2f m \n", y2);

    return 0;
}
