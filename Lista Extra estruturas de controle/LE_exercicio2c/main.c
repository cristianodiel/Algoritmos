#include <stdio.h>
/*Este programa converte um número N de base 10 para um número
em base M*/
int main(void){
int N,M,R=0,pot,resto;
scanf("%d %d",&N,&M);//corrigindo as aspas
pot = 1;
for(resto = N; resto != 0; ){
R = R + ((resto%M)*pot);
pot = pot*10;
resto = resto/M;
}
printf("%d",R);//corrigindo aspas
return 0;
}
