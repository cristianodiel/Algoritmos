#include <stdio.h>
#include <stdlib.h>
/*A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos p�es e broas (juntos), e quanto deve guardar numa conta de poupan�a (10% do total arrecadado).
Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo
para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados.*/
int main()
{
    int paes,broa;
    float custoUnPao, custoUnBroa, vendasDiaria, poupanca;
    custoUnPao = 0.12; //em reais
    custoUnBroa = 1.50; //em reais
    printf("Digite a quantidade de paes franceses vendidos no dia\n");
    scanf("%c",&paes);
    printf("Digite a quantidade de broas vendidas no dia\n");
    scanf("%d",&broa);
    vendasDiaria = paes * custoUnPao + broa * custoUnBroa;
    poupanca = 0.10 * vendasDiaria;
    printf("O total arrecadado com as vendas no dia eh de %.2f reais\n",vendasDiaria);
    printf("O valor de 10%% referente a poupanca eh de %.2f reais\n",poupanca);
    return 0;
}
