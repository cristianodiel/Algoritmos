/*Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=20,i=1, maior_de_idade=0;
    float numero[20], soma=0, media;
    printf("Algoritmo identificar quantas pessoas sao maiores de idade\n");

    while (i<=n)
    {
        printf("Insira a idade da pessoa [%i]\n", i);
        scanf("%f",&numero[i]);
        printf("idade[%i]=%.1f\n", i, numero[i]);
        if (numero[i]>=18){
            maior_de_idade = maior_de_idade + 1;
        }
        i++;

    }


    printf("existem %i pessoas maiores de idade dentre as %i que foram informadas a idade\n", maior_de_idade, n);

    return 0;
}
