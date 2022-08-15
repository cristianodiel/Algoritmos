#include <stdio.h>
#include <stdlib.h>
/* Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x
DEZENA = x
UNIDADE = x*/
int main()
{
    int centena, dezena, unidade, numero, restoCentena, restoDezena, restoUnidade;
    //double

    printf("Informe um numero de ate tres digitos:\n");
    scanf("%d",&numero);
    //printf("%0.lf",numero);
    centena = numero / 100;
    restoCentena = numero % 100;

    dezena = restoCentena / 10;
    restoDezena = restoCentena % 10;

    unidade = restoDezena / 1;

    printf("CENTENA = %d\n",centena);
    printf("DEZENA = %d\n",dezena);
    printf("UNIDADE = %d\n",unidade);

    return 0;
}
