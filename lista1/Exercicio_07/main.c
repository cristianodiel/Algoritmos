#include <stdio.h>
#include <stdlib.h>
/*Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do ano. Esque�a
a quest�o dos anos bissextos e considere sempre que um m�s possui 30 dias.*/
int main()
{
    int dia,mes,numDias;
    printf("Dia:\n");
    scanf("%i",&dia);
    printf("Mes:\n");
    scanf("%i",&mes);
    numDias = mes * 30 + dia;
    printf("Ja se passaram  %i dias desde o inicio do ano\n",numDias);
    return 0;
}
