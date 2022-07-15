/*Para uma lanchonete, escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. O cardápio
é o seguinte:
Produto Preço
Cachorro quente R$11,00
Bauru R$ 8,50
Misto Quente R$ 8,00
Hamburger R$ 9,00
Cheeseburger R$10,00
Refrigerante R$ 4,50*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int codigo;
    float conta = 0;
    do
    {
        printf("**************Menu**************\n");
        printf("Codigo Produto             Preco\n");
        printf("  1    Cachorro quente   R$11,00\n");
        printf("  2    Bauru             R$ 8,50\n");
        printf("  3    Misto Quente      R$ 8,00\n");
        printf("  4    Hamburger         R$ 9,00\n");
        printf("  5    Cheeseburger      R$10,00\n");
        printf("  6    Refrigerante      R$ 4,50\n");
        printf("  7    Sair do menu\n");

        printf("Informe o codigo do produto desejado\n");
        scanf("%i", &codigo);


        switch(codigo)
        {
        case 1:
            conta = conta + 11.;
            break;
        case 2:
            conta = conta + 8.5;
            break;
        case 3:
            conta = conta + 8.;
            break;
        case 4:
            conta = conta + 9.;
            break;
        case 5:
            conta = conta + 10.;
            break;
        case 6:
            conta = conta + 4.5;
            break;
        case 7:
            printf("A conta total eh de R$ %.2f.\n\n\n",conta);
            break;
        default:
            printf("Codigo de produto inexistente. Verifique o codigo do pedido.");
        }
    }
    while (codigo!=7);


    return 0;
}
