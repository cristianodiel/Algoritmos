//2) Dados os programas abaixo verifique os erros neles e proponha uma correção:
#include <stdio.h>

/*Este programa propôe-se a calcular o fatorial de um
 número n */
int main(void){

    //int n,r;//a variavel i nao estava sendo definida
    int n,r,i;
    r = 1;
    printf("Programa para calcular o fatorial de um numero.\n");//o programa nao trazia nenhuma informação explicando o que fazia
    printf("Informe um numero:\n");
    scanf("%d",&n);
    //o programa nao estava considerando a possibilidade do usuario inserir um numero menor do que 1. Nestes casos o programa entraria em um laço infinito.

    if (n==0)
       printf("0! = 1");
    else if(n<0)
        printf("Por favor insira um numero positivo.");
    else{
        //for(i = 1; i != n; i++) // o fatorial calculado nao estava incluindo o proprio numero n. Adicionei o limite para n+1 para multiplicar uma vez mais.
        for(i = 1; i != n+1; i++)
        {
            r = r *i;
        }
        printf("%d",r);
    }
    return 0;
}
