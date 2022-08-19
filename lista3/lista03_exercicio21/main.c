/* O restaurante da quest�o 17 realiza reservas de mesas atrav�s de liga��es telef�nicas e possui 50
mesas dispon�veis para reserva. Dessas mesas, 25 s�o na �rea de fumantes e 25 na �rea de n�o
fumantes. Para cada liga��o recebida, o restaurante deve verificar se a reserva � para a mesa na
�rea de fumantes ou de n�o fumantes e contabilizar a quantidade de mesas restantes dispon�veis
em cada �rea. Construa um algoritmo que realize a reserva das mesas e encerre a execu��o
quando n�o houver mais mesas dispon�veis (nem na �rea de fumantes, nem na �rea de n�o
fumantes).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=4,mesas_fumantes,mesas_nao_fumantes,max_mesas_fumantes=(n/2),max_mesas_nao_fumantes=(n/2),indicativo_fumante=0, fumante;
    printf("Reserva de mesas para o exercicio 17.\n");
    mesas_fumantes = max_mesas_fumantes;
    mesas_nao_fumantes = max_mesas_nao_fumantes;

    do {
        printf("A reserva de mesa eh para fumante? (informe 1 pra fumante e 2 para nao fumante)\n");
        scanf("%i",&fumante );

        if (fumante==1){
                if (mesas_fumantes>0){
                    mesas_fumantes = mesas_fumantes - 1;
                }else{
                    printf("\n\nNao existem mais mesas disponiveis para fumantes\n\n\n");

                }
        }else if (fumante==2){
            if (mesas_nao_fumantes>0){
                     mesas_nao_fumantes = mesas_nao_fumantes - 1;
                }else{
                    printf("\n\nNao existem mais mesas disponiveis para nao fumantes\n\n\n");

                }
        }

        printf("Mesas ainda disponiveis na area de fumantes: %i\n", (mesas_fumantes));
        printf("Mesas ainda disponiveis na area de nao fumantes: %i\n", (mesas_nao_fumantes));
    }while ((mesas_fumantes!=0)||(mesas_nao_fumantes!=0));{

        printf("Todas as mesas estao ocupadas. Execucao encerrada.");


    }
    return 0;
}
