#include <stdio.h>
#include <stdlib.h>
/*. Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se que este
sofreu um desconto de 10%.*/
int main()
{
    float preco, preconovo;
    printf("Preco normal do produto:\n");
    scanf("%f",&preco);


    preconovo = (1-0.1)*preco;
    printf("LIQUIDACAO!! -10%% OFF: R%$%.2f \n",preconovo);
    return 0;
}
