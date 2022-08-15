#include <stdio.h>
#include <stdlib.h>
/*A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e
garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele comprou. */
int main()
{
    float lata350, garrafa600, garrafa2L, Total;
    printf("Informe o numero de latas de 350 mL comprados:\n");
    scanf("%f",&lata350);
    printf("Informe o numero de garrafas de 600 mL comprados:\n");
    scanf("%f",&garrafa600);
    printf("Informe o numero de garrafas de 2 L comprados:\n");
    scanf("%f",&garrafa2L);

    Total = lata350 * 0.350 + garrafa600 * 0.600 + garrafa2L * 2;
    printf("No total foram comprados %f litros de refrigerante:\n", Total);

    return 0;
}
