/*Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. Só encerre a
execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
a 0.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{


    float valor_da_conta=0, bebida, peso;
    do
    {
        printf("Informe o peso do prato do cliente\n");
        scanf("%f", &peso);

            printf("Informe o valor da bebida escolhida\n");
            scanf("%f", &bebida);

        valor_da_conta = valor_da_conta + bebida + (peso * 23.59);

        }

    while ((peso!=0)||(bebida!=0));

    printf("A conta total eh de R$%.2f\n", valor_da_conta);

    return 0;
}
