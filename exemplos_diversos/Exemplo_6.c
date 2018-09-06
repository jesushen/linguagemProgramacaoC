#include<stdio.h>
#include<stdlib.h>
/*Inicialização de Vetores*/
void main(){
    int i;
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    for(i=0; i< 10; i++){
        printf("\nVetor na posicao: [%d] : %d ", i, vetor[i]);
    }
}
