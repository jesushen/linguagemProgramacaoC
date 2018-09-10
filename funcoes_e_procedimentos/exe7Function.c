#include<stdio.h>
#include<stdlib.h>
int fatorial(int);/*protótipo da função*/
void main(){
    int n, calculo;
    printf("Informe o numero: ");
    scanf("%d", &n);
    calculo = fatorial(n);
    printf("O fatorial de %d eh: %d", n, calculo);
}
int fatorial(int num){
    int fat;
    if(num<=1){ return 1; }
    else{
        fat = num * fatorial(num-1);
        return fat;
    }
}


