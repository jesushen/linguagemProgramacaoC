#include<stdio.h>

#define TAMANHO 5

void main(){
    int num[TAMANHO];
    int tam;
    tam = sizeof(num) / sizeof(num[0]);
    printf("O tamanho do vetor: %d", tam);

}

