/* Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. Para cada
casa visitada, foi preenchida uma ficha contendo o número do canal (3, 5, 8, 11 ou 13) e o número
de pessoas que estavam assistindo o canal naquela casa. Faça um algoritmo que:
a. Leia a informação da quantidade de casas participantes da pesquisa.
b. Receba as informações coletadas em cada uma das casas participantes da
pesquisa: a informação do canal que estava sendo assistido e a quantidade de
pessoas que estava assistindo aquele canal na casa.
e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
quantidade de pessoas que assistia cada canal em cada casa)
g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua
respectiva porcentagem de audiência.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, total_casas, canal;
    float per3,per5,per8,per11,per13,num3=0,num5=0,num8=0,num11=0,num13=0,num_tot,pessoas;
    printf("Informe quantas casas estao participando da pesquisa:\n");
    scanf("%i",&total_casas);
    for(i=0;i<total_casas;i++){
        printf("Informe o canal (3, 5, 8, 11 ou 13) que esta sendo assistindo na casa %i:\n",i+1);
        scanf("%i",&canal);
        printf("Informe quantas pessoas estavam assistindo na casa %i:\n",i+1);
        scanf("%i",&pessoas);

            switch (canal){
        case 3:
            num3 = num3 + pessoas;
            break;
        case 5:
            num5 = num5 + pessoas;
            break;
        case 8:
            num8 = num8 + pessoas;
            break;
        case 11:
            num11 = num11 + pessoas;
            break;
        case 13:
            num13 = num13 + pessoas;
            break;
        default:
            printf("Canal informado errado. Reinicie o programa e tente novamente.\n");
            break;
        }

    }
    num_tot = num3+num5+num8+num11+num13;

    per3 = num3/num_tot*100;
    per5 = (num5/num_tot)*100;
    per8 = (num8/num_tot)*100;
    per11 = (num11/num_tot)*100;
    per13 = (num13/num_tot)*100;

    printf("Canal 3. %.2f %% de audiencia.\n",per3);
    printf("Canal 5. %.2f %% de audiencia.\n",per5);
    printf("Canal 8. %.2f %% de audiencia.\n",per8);
    printf("Canal 11. %.2f %% de audiencia.\n",per11);
    printf("Canal 13. %.2f %% de audiencia.\n",per13);




    return 0;
}
