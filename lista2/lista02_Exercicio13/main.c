/*Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de 100,
50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, notas100, notas50, notas10, notas5, notas1;
    printf("Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de 100,50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias.\n");
    printf("Informe um valor em reais\n");
    scanf("%i",&valor);
    notas100 = valor/100;
    notas50 = (valor - notas100*100)/50;
    notas10 = (valor - notas100*100 - notas50*50)/10;
    notas5 = (valor - notas100*100 - notas50*50 - notas10*10)/5;
    notas1 = (valor - notas100*100 - notas50*50 - notas10*10 - notas5*5)/1;
    printf("%i Notas de 100.\n",notas100);
    printf("%i Notas de 50.\n",notas50);
    printf("%i Notas de 10.\n",notas10);
    printf("%i Notas de 5.\n",notas5);
    printf("%i Notas de 10.\n",notas1);
    return 0;
}
