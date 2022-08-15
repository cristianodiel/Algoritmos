#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont=0,numero;
    printf("Informe um numero para calcular o log aproximado:");
    scanf("%d",&n);
    numero=n;
    while (n>1)
        {
            n=n/10;
            cont=cont+1;
        }

    printf("Log %d = %d\n",numero,cont);
    return 0;
}
