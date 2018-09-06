#include<stdio.h>

void main(){
    //declaração de uma matriz de duas dimensões
    int numeros[2][2];

    numeros[0][0] = 10;
    numeros[0][1] = 15;
    numeros[1][1] = 20;
    numeros[1][2] = 20;

    printf("O elemento da Matriz da Linha 1 e Coluna 2: %d", numeros[0][2]);
    printf("\n %d",(numeros[0][0]+numeros[0][1]));


}


