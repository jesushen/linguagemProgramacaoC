#include<stdio.h>

#define LINHA 3
#define COLUNA 3

void main(){
    int numeros[LINHA][COLUNA];
    int i, j;
    for(i=0; i<LINHA;i++){
        for(j=0;j<COLUNA; j++){
            printf("[ %d ]", j);
        }
        printf("\n");
    }
}

