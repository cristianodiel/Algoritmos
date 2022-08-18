/*3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{
    int i,A[TAM],B[TAM];
    printf("Informe %d numeros\n",TAM);
    for (i=0;i<TAM;i++){
        printf("Informe um numero:\n");
        scanf("%d",&A[i]);
        B[i]=pow(A[i],2);
    }
    for (i=0;i<TAM;i++){
        printf("A[%d]:%d\n",i,A[i]);
    }
    printf("\n",i,B[i]);
    for (i=0;i<TAM;i++){
        printf("B[%d]:%d\n",i,B[i]);
    }
    return 0;
}
