/* O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
em cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução
quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não
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
