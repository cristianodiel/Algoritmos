/*Leia o nome do usuário e escreva o nome dele na tela 10 vezes.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10,i;
    char nome[40];
    printf("insira seu nome\n");
    scanf("%s",&nome);
    //printf("Informe quantas vezes deseja ter seu nome impresso\n");
    //scanf("%i",&n);
    while (i<n)
    {
        printf("%s\n", nome);
        i++;

    }

    return 0;
}
