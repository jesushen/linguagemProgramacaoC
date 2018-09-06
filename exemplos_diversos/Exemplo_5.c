#include<stdio.h>
#include<stdlib.h>
/*Criando um vetor de tamanho definido por define*/
#define tam 20

void main(){
    int i;
    int vetor[tam];

    for(i=0; i< tam; i++){
       vetor[i] = rand() %100;
    }

    for(i=0; i< tam; i++){
        printf("%d |", vetor[i]);
    }
}
