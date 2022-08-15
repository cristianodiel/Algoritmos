#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,e_menor;
    float m;
    printf("Programa para determinar um numero entre 0 a 'n'.\n");
    printf("Informe o valor de 'n'.\n");
    scanf("%d",&b);
    printf("Para as proximas perguntas, responda '1' para sim e '0' para nao.\n");
    a=0;
    m=(a+b)/2;
    while((b-a)>1){
        printf("O numero e menor do que %.0f?\n",m);
        scanf("%d",&e_menor);
        if (e_menor==1){
            //printf("menor\n");
            b=m;
        }else if (e_menor==0){
            //printf("maior\n");
            a=m;
        }else{
        printf("Por favor, responda '1' para sim e '0' para nao.\n");
        printf("O numero e menor do que %d?\n",m);
        }
        m=(a+b)/2;
        printf("A=%d, M=%d, B=%d\n",a,(int)m,b);
    }
    //printf("O numero e %d",(int)m);
    printf("O numero e maior do que %d?\n",a);
    scanf("%d",&e_menor);
        if (e_menor==1){
            printf("O numero e maior do que %d?\n",b);
        }else if (e_menor==0){
            printf("O numero e maior do que %d?\n",a);
        }
    return 0;
}
