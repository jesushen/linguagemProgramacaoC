#include<stdio.h>

int soma(){
    int n1 = 3;
    int n2 = 4;
    return (n1+n2);
}

float adicao(float f1, float f2){
    return (f1+f2);
}

void main(){
    float x=3.5, y=6.2;
    int res;
    float total;

    total = adicao(x,y);
    res = soma();
    printf("\n A soma dos inteiros: %d", res);
    printf("\n A soma dos reais   : %.2f", total);
}

