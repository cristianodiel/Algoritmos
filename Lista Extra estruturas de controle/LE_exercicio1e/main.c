//e)Dado um dígito, escrever o mesmo em código Morse.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Programa para traduzir um numero para codigo morse\n");
    printf("Informe um digito de 0 a 9:\n");
    scanf("%d",&n);
    switch(n)
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

    return 0;
}
