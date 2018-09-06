#include<stdio.h>
void main(){
    int n;
    do{
        printf("Digite um Numero positivo e diferente de ZERO:\n");
        scanf("%d", &n);
    }while(n<=0);

    printf("A raiz quadrada de N %d e: %d", n, (n*n));
}
