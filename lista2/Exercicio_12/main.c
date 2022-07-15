/*Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
forem verificar se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo, escrever a mensagem. Considere as seguintes propriedades:
a. O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
b. Equiláteros: tem os comprimentos dos três lados iguais;
c. Isósceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos três lados diferentes. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("Informe o valor de x:\n");
    scanf("%d",&x);
    printf("Informe o valor de y:\n");
    scanf("%d",&y);
    printf("Informe o valor de z:\n");
    scanf("%d",&z);



        if((x>(y+z))||(y>(x+z))||z>(x+y))
        {
            printf("x y e z nao podem formar um triangulo com essas dimensoes.");
        }
        else
        {
            if (x==y&&x==z)
            {
                printf("x, y e z formam um triangulo equilatero.");
            }
            else if(x!=y&&x!=z&&y!=z)
            {
                printf("x, y e z formam um triangulo escaleno.");
            }
            else
            {
                printf("x, y e z formam um triangulo isoceles.");
            }

        }

    return 0;
}
