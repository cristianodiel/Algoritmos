/*Escreva um algoritmo que calcule o somat�rio dos n�meros de um intervalo informado pelo
usu�rio.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,soma=0;
    printf("programa para calcular o somatorio dos numeros entre dois numeros, \"a\" e \"b\"\n");
    printf("informe o valor de \"a\"\n");
    scanf("%i",&a);
    printf("informe o valor de \"b\"\n");
    scanf("%i",&b);
    while (i<=b)
    {

        soma = soma + i;
        i++;

    }
    printf("O somatorio entre \"a\" e \"b\" eh: %i\n", soma);
    return 0;
}
