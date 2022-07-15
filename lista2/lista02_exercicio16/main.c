/*Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça
um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo médio e o valor do crédito.
Saldo Médio Percentual
De 0 a 200 Nenhum crédito
De 201 a 400 20%
De 401 a 600 30%
Acima de 601 40%*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldoMedio, credito;
    printf("Tabela de creditos:\n");
    printf("Saldo Medio     Percentual\n");
    printf("De 0 a 200        Nenhum credito\n");
    printf("De 201 a 400       20%%\n");
    printf("De 401 a 600       30%%\n");
    printf("Acima de 601       40%%\n");

    printf("Informe o saldo medio do cliente no ultimo ano\n");
    scanf("%f", &saldoMedio);


    if (saldoMedio<=200)
        printf("o cliente nao tem nenhum credito.",credito);
    else if (saldoMedio<=400){
        credito = 0.2 * saldoMedio;
        printf("o cliente tem R$ %.2f de credito.",credito);
    }else if (saldoMedio<=600){
        credito = 0.3 * saldoMedio;
        printf("o cliente tem R$ %.2f de credito.",credito);
    }else{
        credito = 0.4 * saldoMedio;
        printf("o cliente tem R$ %.2f de credito.",credito);

        }


    return 0;
}
