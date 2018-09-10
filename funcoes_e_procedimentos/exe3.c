#include<stdio.h>

void main(){
    int t, n[5] = {2,5,8,9,9};
    t= sizeof(n)/sizeof(n[0]);
    mediaNumeros(n,t);
}

void mediaNumeros(int vetor[], int tamanho){
    int i, t;
    float media, soma;

    for(i=0; i<tamanho; i++){
        soma+=vetor[i];
    }
    media = soma/tamanho;
    printf("\nOs valores passados para o vetor foram: \n");
    for(i=0; i<tamanho; i++){
        printf(" %d | ", vetor[i]);
    }
    printf("\nA Soma do numeros %.2f ", soma);
    printf("\nA Media do numeros %.2f ", media);
}
