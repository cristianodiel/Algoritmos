#include <stdio.h>
#include <stdlib.h>
/* Tr�s amigos, Carlos, Andr� e Felipe. decidiram rachar igualmente a conta de um bar. Fa�a um algoritmo para
ler o valor total da conta e imprimir quanto cada um deve pagar, mas fa�a com que Carlos e Andr� n�o paguem centavos.
Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para Andr� e R$35,53
para Felipe*/
int main()
{
    float total, felipe;
    int carlos, andre;

    printf("Informe o valor total da conta:\n");
    scanf("%f",&total);
    carlos = total/3;
    andre = total/3;
    felipe = total - carlos - andre;


    printf("O valor a ser pago por Carlos eh de %d reais \n",carlos);
    printf("O valor a ser pago por Andre eh de %d reais \n",andre);
    printf("O valor a ser pago por Felipe eh R$ %.2f \n",felipe);


    return 0;
}
