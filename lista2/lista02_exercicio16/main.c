/*Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano. Fa�a
um algoritmo que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito.
Saldo M�dio Percentual
De 0 a 200 Nenhum cr�dito
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
