#include<stdio.h>

teste(int n){
    return (n>0) ? n-2 : n+2;
}

void main(){
    int x, retorno;
    x=3;
    retorno = teste(x);
    printf("\n O retorno da funcao foi: %d", retorno);
}

