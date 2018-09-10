#include<stdio.h>
//início do programa principal
main(){
    soma();
    printf("\n");
    somaTotal(3,4);
    printf("\n");
}
//fim do programa principal

void soma(){
    int t, n1, n2;
    n1=3;
    n2=5;
    t=n1+n2;
    printf("A soma eh: %d", t);
}

void somaTotal(int n1, int n2){
    int soma;
    soma =n1+n2;
    printf("A soma TOTAL eh: %d", soma);
}
