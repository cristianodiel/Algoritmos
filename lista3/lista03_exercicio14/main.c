/*. Faça um algoritmo escreva a diversas vezes a pergunta “Olá tudo bem?” e leia a resposta do usuário enquanto ele responde não.
 Só encerre a execução quando a resposta for igual a “Sim”.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[3];
    printf("Para encerrar o programa, responda 'sim'.\n");


    do{
        printf("Ola, tudo bem? \n");
        scanf("%s",&a);

    }while (strcmp(a,"sim")!=0);

    return 0;
}
