#include <stdio.h>
#include <stdlib.h>
//1)c)Dados n�meros n e m,  escreva a todos os n�meros entre 1 a 200 que sejam
//divis�veis por n mas n�o por m.

int main()
{
    int n,m,i,max=200;
    printf("Numeros entre 1 a 200 que sao divisiveis por 'n' e nao por 'm'.\n");
    printf("Informe o valor de 'n'.\n");
    scanf("%d",&n);
    printf("Informe o valor de 'm'.\n");
    scanf("%d",&m);
    printf("Os seguintes numeros sao divisiveis por %d e nao sao divisiveis por %d:\n",n,m);
    for(i=1;i<=max;i++){
            if((i%n==0)&&(i%m!=0))
            printf("%d ",i);
    }

    return 0;
}
