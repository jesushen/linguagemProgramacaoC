#include<stdio.h>
#include<stdlib.h>
/*carregando um vetor de 10 posi��es com n�meros aleat�rios*/
void main(){
    int vetor[10];
    int i;

    for(i=0; i<10; i++){
        vetor[i] = rand() % 60;
    }

    printf("Os n�meros sorteados foram: \n");
     for(i=0; i<10; i++){
        printf("%d |", vetor[i]);
    }
}
