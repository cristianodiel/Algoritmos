#include <stdio.h>
#include <stdlib.h>
/* Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Fa�a um algoritmo
para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de convers�o). */
/*(0 �C � 9/5) + 32 = 32 �F
*/
int main()
{
    float TempC, TempF;

    printf("Informe a temperatura em graus Celsius:\n");
    scanf("%f",&TempC);
    TempF = TempC * 9 / 5 + 32;


    printf("A temperatura de %.2f %167 C equivale a %.2f %167 F \n",TempC, TempF);

    return 0;
}
