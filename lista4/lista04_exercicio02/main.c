#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um vetor de 20 posições e informe:
a) Quantos números pares existem no vetor
b) Quantos números ímpares existem no vetor
c) Quantos números maiores do que 50
d) Quantos números menores do que 7 */
int main()
{
    int i,n=20,pares=0, impares=0,maiorque50=0, menorque7=0, vet[n];
    for(i=0;i<n;i++){
        printf("vet[%i]=\n",i);
        scanf("%i",&vet[i]);
        if (vet[i]%2==0){
            pares = pares + 1;
        } else{
            impares = impares + 1;
        }
        if (vet[i]>50)
            maiorque50 = maiorque50 + 1;
        if (vet[i]<7)
            menorque7 = menorque7 + 1;
    }

    printf("Existem %i numeros pares dentre os informados.\n",pares);
    printf("Existem %i numeros impares dentre os informados.\n",impares);
    printf("Existem %i numeros maiores que 50 dentre os informados.\n",maiorque50);
    printf("Existem %i numeros menors que 7 dentre os informados.\n",menorque7);

    return 0;
}
