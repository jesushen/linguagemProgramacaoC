#include<stdio.h>
#include<stdlib.h>


void main(){
    /*Declara��o do prot�tipo da fun��o*/
    float soma(float, float);

    float r, n1, n2;

    n1=4;
    n2=10;

    r= soma(n1,n2);
    printf("\n A soma e: %.2f", r);
}

float soma(float a, float b){
    return a+b;
}
