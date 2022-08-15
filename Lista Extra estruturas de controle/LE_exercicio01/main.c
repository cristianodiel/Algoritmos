#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[3],i,max,menor, maior;
    printf("Programa para identificar qual o maior dentre tres numeros informados.\n");
    for (i=1;i<=max;i++){
        printf("Insira o valor para n%d:\n",i);
        scanf("%d",&n[i]);
    }
    if ((n[1]<n[2])&&(n[1]<n[3]))
        menor=n[1];
    else if (n[2]<n[3]){
        menor=n[2];
    }else{
        menor=n[3];
    }

    if ((n[1]>n[2])&&(n[1]>n[3]))
        maior=n[1];
    else if (n[2]>n[3]){
        maior=n[2];
    }else{
        maior=n[3];
    }
    printf("Dentre os numeros informados, o menor valor eh %d:\n",menor);
    printf("Dentre os numeros informados, o maior valor eh %d:\n",maior);
    return 0;
}
