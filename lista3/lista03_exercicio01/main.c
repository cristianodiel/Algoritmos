/*Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez est� sendo escrita:
�Esta � a mensagem 1�, �Esta � a mensagem 2� ... �Esta � a mensagem 20�*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=20,i;
    while (i<20)
    {
        i++;
        printf("Esta eh a mensagem %i\n", i);

    }

    return 0;
}
