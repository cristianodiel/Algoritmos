/*Escreva um algoritmo que simule o funcionamento de um caixa de supermercado.
O seu algoritmo deve receber do a informação de quantos produtos o cliente comprou e, para
cada produto, deverá ler o seu preço. Ao final, deverá informar quanto o cliente deve pagar
pelas compras.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    float preco, aux=0;
    do
    {
        printf("Informe a quantidade do produto comprado (digite 0 para fechar a conta)\n");
        scanf("%i", &numero);
        if (numero>0){
            printf("Informe o preco unitario do produto comprado\n");
            scanf("%f", &preco);
        }
        aux = aux + numero * preco;

        }

    while (numero!=0);

    printf("A conta total eh de R$%.2f\n", aux);

    return 0;
}
