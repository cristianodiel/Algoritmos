/*Refaça as funções de busca sequencial e busca binária vistas em aula assumindo que o vetor possui
chaves que podem aparecer repetidas. Neste caso, você deve retornar em um outro vetor todas as
posições onde a chave foi encontrada.
Protótipo da função: void busca(int vet[], int tam, int chave, int posicoes[], int *n)
• Você deve devolver em posicoes[] as posições de vet que possuem a chave, e devolver em *n o
número de ocorrências da chave.
– OBS: Na chamada desta função, o vetor posições deve ter espaço suficiente (por exemplo,
tam) para guardar todas as possíveis ocorrências da chave.*/

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
