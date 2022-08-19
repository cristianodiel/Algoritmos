/*Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n=3,i=1;
    char nome_de_menor_idade[40], nome[40];
    float idade, menor_idade=90000000000;
    printf("Algoritmo para identificar a pessoa mais nova.\n");

    while (i<=n)
    {
        printf("Insira o nome da pessoa [%i]\n", i);
        scanf("%s",nome);
        printf("Insira a idade da pessoa [%i]\n", i);
        scanf("%f",&idade);
        printf("idade = %.1f\n", idade);
        if (idade < menor_idade){
            menor_idade = idade;
            strcpy (nome_de_menor_idade, nome);
        }
        i++;

    }


    printf("%s eh a pessoa de menor idade do grupo, com %.1f anos de idade\n", nome_de_menor_idade, menor_idade);

    return 0;
}
