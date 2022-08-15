#include <stdio.h>
#include <stdlib.h>
/*Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade respectiva é zero.  */
int main()
{
    float moeda01, moeda05, moeda10, moeda25, moeda50, moeda100, Total;
    printf("Informe o numero de moedas de 1 real:\n");
    scanf("%f",&moeda100);
    printf("Informe o numero de moedas de 50 centavos:\n");
    scanf("%f",&moeda50);
    printf("Informe o numero de moedas de 25 centavos:\n");
    scanf("%f",&moeda25);
    printf("Informe o numero de moedas de 10 centavos:\n");
    scanf("%f",&moeda10);
    printf("Informe o numero de moedas de 5 centavos:\n");
    scanf("%f",&moeda05);
    printf("Informe o numero de moedas de 1 centavos:\n");
    scanf("%f",&moeda01);

    Total = moeda100 * 1 + moeda50 * 0.5 + moeda25 * 0.25 + moeda10 * 0.10 + moeda05 * 0.05 + moeda01 * 0.01;
    printf("No total, Pedrinho tem R%$ %.2f \n", Total);

    return 0;
}
