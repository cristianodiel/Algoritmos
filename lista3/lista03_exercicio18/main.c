/*Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
a. para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
b. aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior
ou igual a 6.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, n;
    float nota1,nota2, media;


        printf("Informe o numero de alunos da turma\n");
        scanf("%i", &n);
        for(i=0;i<n;i++){

                printf("Informe a nota 1 do aluno %i\n",i+1);
                scanf("%f", &nota1);
                printf("Informe a nota 2 do aluno %i\n",i+1);
                scanf("%f", &nota2);
                media = (nota1 + nota2)/2;

            if (media<6)
                printf("Media inferior a 6. Aluno reprovado.\n");
            else
                printf("Media igual superior a 6. Aluno aprovado.\n");



        }

    return 0;
}
