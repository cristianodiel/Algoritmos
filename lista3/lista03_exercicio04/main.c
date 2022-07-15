/*Leia o nome de um usuário e um número N e escreva o nome dele na tela N vezes.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    char nome[40];
    printf("insira seu nome\n");
    scanf("%s",&nome);
    printf("Informe quantas vezes deseja ter seu nome impresso\n");
    scanf("%i",&n);
    while (i<n)
    {
        printf("%s\n", nome);
        i++;

    }

    return 0;
}
