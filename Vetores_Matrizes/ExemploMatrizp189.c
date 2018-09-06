#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//definindo o tamanho da matriz
#define JOGOS 5
#define N 6
void main(){
    int matriz[JOGOS][N], k, j;

    for(k=0; k< JOGOS; k++){
        for(j=0; j< N; j++){
            matriz[k][j] = rand()%60+1; //número aleatório de 1 a 60
        }
    }
    for(k=0; k< JOGOS; k++){
        printf("Combinacao %2d: ", k+1);
        for(j=0; j< N; j++){ //imprime as dezenas na tela
            printf("%2d ", matriz[k][j]);
            printf("\n");
        }
    }
}
