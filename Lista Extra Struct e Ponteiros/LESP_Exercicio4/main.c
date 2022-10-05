/*Refa�a as fun��es de busca sequencial e busca bin�ria vistas em aula assumindo que o vetor possui
chaves que podem aparecer repetidas. Neste caso, voc� deve retornar em um outro vetor todas as
posi��es onde a chave foi encontrada.
Prot�tipo da fun��o: void busca(int vet[], int tam, int chave, int posicoes[], int *n)
� Voc� deve devolver em posicoes[] as posi��es de vet que possuem a chave, e devolver em *n o
n�mero de ocorr�ncias da chave.
� OBS: Na chamada desta fun��o, o vetor posi��es deve ter espa�o suficiente (por exemplo,
tam) para guardar todas as poss�veis ocorr�ncias da chave.*/

#include <stdio.h>
struct T{
int x;
int y;
};
typedef struct T T;
void f1(T *a);
void f2(int *b);
int main(){
T a, b, *c, *d;
c = &a;
a.x = 2;
a.y = 4;
b.x = 2;
b.y = 2;
d = c;
f1(d);
b = *d;
printf("x: %d --- y: %d\n",b.x,b.y);
}
void f1(T *a){
f2(&(a->x));
f2(&(a->y));
}
void f2(int *b){
*b = 2*(*b);
}
