#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e a escolha da condição de pagamento.
Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
Código Condição de pagamento
a) À vista em dinheiro ou cheque, recebe 10% de desconto
b) À vista no cartão de crédito, recebe 15% de desconto
c) Em duas vezes, preço normal de etiqueta sem juros
d) Em duas vezes, preço normal de etiqueta mais juros de 10% */

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char codigo;
    float valor;
    printf("informe o valor a ser pago:");
    scanf("%f", &valor);
    printf("Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.\nCódigo Condição de pagamento\na) À vista em dinheiro ou cheque, recebe 10%% de desconto\nb) À vista no cartão de crédito, recebe 15%% de desconto\nc) Em duas vezes, preço normal de etiqueta sem juros\nd) Em duas vezes, preço normal de etiqueta mais juros de 10%%\n");
    scanf("%s", &codigo);
    if (codigo == 'a'){
        printf("O valor a ser pago é R%$ %.2f", (valor*(1-0.10)));
    }else if(codigo == 'b'){
        printf("O valor a ser pago é: %.2f", (valor*(1-0.15)));
    }else if(codigo == 'c'){
        printf("O valor a ser pago é R%$ %.2f, dividido e duas parcelas iguais de R%$ %.2f", valor, (valor/2));
    }else if(codigo == 'd'){
        printf("O valor a ser pago é R%$ %.2f, dividido e duas parcelas iguais de R%$ %.2f", (valor*(1+0.1)), (valor*(1+0.1)/2));
    }else
        printf("O código digitado é inválido.");


    return 0;
}
