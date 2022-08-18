#include <stdio.h>
/* Este programa l� uma sequ�ncia de tamanho indefinido de
n�meros do teclado e calcula a m�dia aritm�tica dos mesmos. A
leitura � interrompida quando se digita um n�mero negativo. O
numero negativo n�o deve entrar no c�lculo.*/
int main(void)
{
    double acumulado,media,lido;
    int contador;
    acumulado = 0;
    contador = 0;
    do
    {
        printf ("Insira um numero para ser somado, ou um numero negativo para encerrar a soma:\n");
        scanf("%lf",&lido);
        if (lido>=0)//adicionada condicao
        {
            contador++;
            acumulado = (acumulado + lido);//trocando total por acumulado. tirando a divisao pelo contador. efetuar este passo depois
        }
    }while (lido >= 0);
    media = acumulado/contador;//trocando total por acumulado. só agora dividindo pelo contador

    printf("Media= %lf",media);
    return 0;
}

