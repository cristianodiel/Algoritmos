#include <stdio.h>
#include <stdlib.h>
/*. Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�.
Fa�a um algoritmo para calcular quantos litros de �gua e de suco s�o necess�rios para se fazer X litros de refresco
(informados pelo usu�rio). */
int main()
{
    float agua, suco, refresco;
    printf("Informe quantos litros de refresco desejam ser feitos:\n");
    scanf("%f",&refresco);


    agua = refresco * 8 / 10;
    printf("A quantidade de agua necessaria eh %.2f L \n", agua);
    suco = refresco * 2 / 10;
    printf("A quantidade de suco necessaria eh %.2f L \n", suco);

    return 0;
}
