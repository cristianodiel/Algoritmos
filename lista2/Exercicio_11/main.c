#include <stdio.h>
#include <stdlib.h>

/*. Uma escola faz o pagamento de seus professores por hora/aula. Faça um algoritmo que solicite ao usuário, o
nível do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o salário de
um professor sabendo que a fórmula para o cálculo do salário é 𝑠𝑠𝑠𝑠𝑠𝑠 = 𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣 ∗ 𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞 ∗ 4.5. O valor
da hora/aula do professor é dado em função do seu nível:
Professor Nível 1 R$12,00 por hora/aula
Professor Nível 2 R$17,00 por hora/aula
Professor Nível 3 R$25,00 por hora/aula */

int main()
{

    int nivel, qtdAula;
    float valor_hora_aula, sal;
    printf("informe o nivel do professor:");
    scanf("%i", &nivel);
    printf("informe a quantidade de horas/aula por semana:");
    scanf("%i", &qtdAula);

    if (nivel == 1){
        valor_hora_aula = 12;
        sal = valor_hora_aula * qtdAula * 4.5;
        printf("O salario do professor e R%$ %.2f", sal);
    }else if (nivel == 2){
        valor_hora_aula = 17;
        sal = valor_hora_aula * qtdAula * 4.5;
        printf("O salario do professor e R%$ %.2f", sal);
    }else if (nivel == 3){
        valor_hora_aula = 25;
        sal = valor_hora_aula * qtdAula * 4.5;
        printf("O salario do professor e R%$ %.2f", sal);
    }else
        printf("O codigo digitado e invalido.");


    return 0;
}
