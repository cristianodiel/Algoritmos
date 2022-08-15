#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as
notas tem pesos respectivos de 1, 2 e 3). */
int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    peso1 = 1;
    peso2 = 2;
    peso3 = 3;
    printf("Nota da disciplina 1:\n");
    scanf("%f",&nota1);
    printf("Nota da disciplina 2:\n");
    scanf("%f",&nota2);
    printf("Nota da disciplina 3:\n");
    scanf("%f",&nota3);
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    printf("A media ponderada das notas eh %.2f \n",media);
    return 0;
}
