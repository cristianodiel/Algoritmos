#include <stdio.h>
#include <stdlib.h>
/*Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmética obtida pelo aluno.
Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado por nota. */

int main()
{
    int numero;
    float n1, n2, n3, media;
    printf("Insira o numero de identificacao do aluno:\n");
    scanf("%i", &numero);
    printf("Insira a primeira nota (com peso 100):\n");
    scanf("%f", &n1);
    printf("Insira a segunda nota (com peso 100):\n");
    scanf("%f", &n2);
    printf("Insira a terceira nota (com peso 100):\n");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;
    if (media >= 70){
        printf("A media do aluno eh superior a 70. Aluno aprovado direto.");
    }else if (media >= 40){
        printf("A media do aluno encontra-se entre 40 e 70. O aluno ficu em recuperacao.");
    }else{
        printf("A media do aluno eh inferior a 40. Aluno reprovado por nota.");
    }
    return 0;
}
