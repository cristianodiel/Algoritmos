#include <stdio.h>
#include <stdlib.h>
/*A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No p� direito do
frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is para indicar o tipo de alimento que ele deve consumir.
Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa
R$3,50, fa�a um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos. */
int main()
{
    float frangos, custoAneis;
    printf("Informe o numero de frangos:\n");
    scanf("%f",&frangos);
    custoAneis = frangos * (1 * 4 + 2 * 3.5);

    printf("O gasto da granja para marcar todos os frangos eh: R%$ %.2f\n", custoAneis);

    return 0;
}
