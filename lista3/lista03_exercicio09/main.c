/*Escreva um algoritmo que leia 20 n�meros informados pelo usu�rio e exiba quantos n�meros s�o
maiores do que 8*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=20,i=1, maior_do_que_8=0;
    float numero[20];
    printf("Algoritmo para identificar quantas dos %i numeros sao maiores do que 8.\n", n);

    while (i<=n)
    {
        printf("Insira o numero [%i]:\n", i);
        scanf("%f",&numero[i]);

        if (numero[i]>8){
            maior_do_que_8 = maior_do_que_8 + 1;
        }
        i++;

    }


    printf("Dentre os %i numeros que foram informadas, existem %i menores do que 8. \n", n, maior_do_que_8);

    return 0;
}
