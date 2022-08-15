#include <stdio.h>
/* Este programa lê uma sequência de tamanho indefinido de
números do teclado e calcula a média aritmética dos mesmos. A
leitura é interrompida quando se digita um número negativo. O
numero negativo não deve entrar no cálculo*/
int main(void){
double acumulado,media,lido;
int contador;
acumulado = 0;
contador = 0;
do{
scanf("%lf",&lido);
contador++;
total = (total + lido)/contador;
}while (lido >= 0);
media = total;
printf(“%f”,media);
return 0;
}

