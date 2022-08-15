#include <stdio.h>
#include <stdlib.h>
/*Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um
algoritmo para ler os dados necessários e calcular a altura do prédio.   */
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
