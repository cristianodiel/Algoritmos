#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i;
    printf("Programa para calcular a tabuada de 'n' de 1 ate 'm'.\n");
    printf("Informe o valor de 'n'.\n");
    scanf("%d",&n);

    if (n<2||n>9)
        printf("Por favor, informe um valor entre 2 e 9 para 'n'");
    else{
        printf("Informe o valor de 'm'.\n");
        scanf("%d",&m);
        printf("==========\n");
        printf("Tabuada do %d:\n",n);
        for(i=1;i<=m;i++){
            printf("1x%d=%d\n",n,n*i);
        }
        printf("==========");
    }
    return 0;
}
