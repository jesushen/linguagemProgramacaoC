#include<stdio.h>
#include<stdlib.h>
/*Criando um vetor de tamanho aleatório*/

void main(){
    int tam, i;


    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];

    for(i=0; i< tam; i++){
       vetor[i] = rand() %100;
    }

    for(i=0; i< tam; i++){
        printf("%d |", vetor[i]);
    }
}
