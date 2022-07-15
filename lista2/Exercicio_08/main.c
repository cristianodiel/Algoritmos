#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o pre�o normal de etiqueta e a escolha da condi��o de pagamento.
Utilize os c�digos da tabela a seguir para ler qual a condi��o de pagamento escolhida e efetuar o c�lculo adequado.
C�digo Condi��o de pagamento
a) � vista em dinheiro ou cheque, recebe 10% de desconto
b) � vista no cart�o de cr�dito, recebe 15% de desconto
c) Em duas vezes, pre�o normal de etiqueta sem juros
d) Em duas vezes, pre�o normal de etiqueta mais juros de 10% */

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char codigo;
    float valor;
    printf("informe o valor a ser pago:");
    scanf("%f", &valor);
    printf("Utilize os c�digos da tabela a seguir para ler qual a condi��o de pagamento escolhida e efetuar o c�lculo adequado.\nC�digo Condi��o de pagamento\na) � vista em dinheiro ou cheque, recebe 10%% de desconto\nb) � vista no cart�o de cr�dito, recebe 15%% de desconto\nc) Em duas vezes, pre�o normal de etiqueta sem juros\nd) Em duas vezes, pre�o normal de etiqueta mais juros de 10%%\n");
    scanf("%s", &codigo);
    if (codigo == 'a'){
        printf("O valor a ser pago � R%$ %.2f", (valor*(1-0.10)));
    }else if(codigo == 'b'){
        printf("O valor a ser pago �: %.2f", (valor*(1-0.15)));
    }else if(codigo == 'c'){
        printf("O valor a ser pago � R%$ %.2f, dividido e duas parcelas iguais de R%$ %.2f", valor, (valor/2));
    }else if(codigo == 'd'){
        printf("O valor a ser pago � R%$ %.2f, dividido e duas parcelas iguais de R%$ %.2f", (valor*(1+0.1)), (valor*(1+0.1)/2));
    }else
        printf("O c�digo digitado � inv�lido.");


    return 0;
}
