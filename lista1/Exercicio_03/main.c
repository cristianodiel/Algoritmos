#include <stdio.h>
#include <stdlib.h>
/*A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado).
Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo
para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.*/
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
