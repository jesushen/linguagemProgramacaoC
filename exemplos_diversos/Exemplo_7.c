#include<stdio.h>
#include<stdlib.h>
/*Matrizes de mais de uma DIMENSÃO*/
#define linha 9
#define coluna 5

void main(){
   int matriz[linha][coluna], i, j;

   for(i=0; i<linha; i++){
    for(j=0; j<coluna; j++){
        matriz[i][j] = rand() % 10;
    }
   }
   printf("\n MOSTRANDO OS VALORES DA MATRIZ\n");
   for(i=0; i<linha; i++){
        printf("Linha %d: ", (i+1));
    for(j=0; j<coluna; j++){
        printf("[ %d ]", matriz[i][j]);
    }
     printf("\n");
   }
}
