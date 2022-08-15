#include <stdio.h>
#include <stdlib.h>
/*Uma confecção produz X blusas de lã e para isto gasta uma certa quantidade de novelos. Faça um algoritmo
para calcular quantos novelos de lã ela gasta por blusa.  */
int main()
{
    float numBlusas, novelos_blusa, numNovelos;
    printf("Informe o numero de blusas fabricadas:\n");
    scanf("%f",&numBlusas);
    printf("Informe o numero de novelos gastos:\n");
    scanf("%f",&numNovelos);
    novelos_blusa = numNovelos / numBlusas;
    printf("Sao gastos %.3f novelos por blusa:\n", novelos_blusa);

    return 0;
}
