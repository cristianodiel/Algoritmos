#include <stdio.h>
#include <stdlib.h>
/* Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias. */
int main()
{
    int dias, anos, meses;

    printf("Informe a quantidade de dias sem acidentes:\n");
    scanf("%d",&dias);

    meses = dias / 30;
    anos = meses / 12;

    printf("Ja se passaram %d ano(s) sem acidentes\n",anos);
    printf("Ja se passaram %d mes(es) sem acidentes\n",meses);
    printf("Ja se passaram %d dia(s) sem acidentes\n",dias);
    return 0;
}
