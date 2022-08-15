//f) Dado um número inteiro, escrever o mesmo em código Morse.
//O código Morse deve ser fornecido na mesma ordem dos caracteres digitados. Utilize o
//programa que calcula o logaritmo de 10 para auxiliá­lo nesta tarefa !
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,n[10],cont=0,aux,resto;
    printf("Programa para traduzir um numero para codigo morse\n");
    printf("Informe um numero:\n");
    scanf("%d",&m);
    //zerando o vetor n
    for(i=0;i<10;i++){
        n[0]=0;
    }
    n[0]=m/10;

    aux=m;
    while (aux>=1)
        {
            aux=aux/10;
            cont=cont+1;
        }
    //printf("cont=%d\n",cont);
    n[cont-1]=m/(pow(10,(cont-1)));
    //printf("n[%d]=%d\n",cont-1,n[cont-1]);
    for(i=cont-2;i>=0;i--){
            resto=(pow(10,(i+1)));
            n[i]=((m)%(resto))/(pow(10,(i)));
        //printf("n[%d]=%d\n",i,n[i]);
    }
    for(i=cont-1;i>=0;i--){
        switch(n[i])
        {
        case 1:
            printf(".---- ");
            break;
        case 2:
            printf("..--- ");
            break;
        case 3:
            printf("...-- ");
            break;
        case 4:
            printf("....- ");
            break;
        case 5:
            printf("..... ");
            break;
        case 6:
            printf("-.... ");
            break;
        case 7:
            printf("--... ");
            break;
        case 8:
            printf("---.. ");
            break;
        case 9:
            printf("----. ");
            break;
        case 0:
            printf("----- ");
            break;
        }
    }

    return 0;
}
