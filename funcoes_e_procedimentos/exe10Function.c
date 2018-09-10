#include<stdio.h>
#include<stdlib.h>
int soma(void);

void main(){
    printf("%d | ", soma());
    printf("%d | ", soma());
    printf("%d | ", soma());
}
int soma(){
    static int k;
    k++;
    return k;
}


