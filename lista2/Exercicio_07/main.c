#include <stdio.h>
#include <stdlib.h>
/*. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso
ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7. */

int main()
{
    float h, ideal;
    char sexo;
    printf("Insira 'm' para sexo masculino e 'f' para sexo feminino:\n");
    scanf("%c", &sexo);
    printf("Insira a sua altura (em metros)\n");
    scanf("%f", &h);


    if (sexo == 'm'){
        ideal = (72.7 * h) - 58;
        printf("Seu peso ideal eh %f", ideal);
    }else if (sexo == 'f'){
        ideal = (62.1 * h) - 44.7;
        printf("Seu peso ideal eh %f", ideal);
    }else{
        printf("codigo errado para o sexo");

    }
    return 0;
}
