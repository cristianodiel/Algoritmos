/*. Fa�a um algoritmo escreva a diversas vezes a pergunta �Ol� tudo bem?� e leia a resposta do usu�rio enquanto ele responde n�o.
 S� encerre a execu��o quando a resposta for igual a �Sim�.*/
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
