/* O ma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informação da espécie do animal (se é gato ou
cachorro). Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que
são cachorros existentes na loja.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,qtidade_gato=0,qtidade_cachorro=0,codigo,codigo_errado=0;
    float vetor[n],maior,menor;
    printf("insira o numero de animais vendidos na loja:\n",i+1);
    scanf("%i",&n );
    printf("Informe o codigo:\n 1 para gato e\n 2 para cachorro:\n");
    for (i=0;i<n;i++){
        printf("informe se o animal %i eh um gato ou um cachorro:\n",i+1);
        scanf("%i",&codigo );
        if (codigo==1){
            qtidade_gato= qtidade_gato +1;
        }else if (codigo==2){
            qtidade_cachorro= qtidade_cachorro +1;
        }else{
        codigo_errado = 1;
        break;
        }
    }
    if (codigo_errado){
        printf("codigo informado errado. Por favor reinicie  programa.\n");
    }else{
        printf("Dos %i animais da loja, %i sao gatos e %i sao cachorros", n, qtidade_gato, qtidade_cachorro);
    }
    return 0;
}
