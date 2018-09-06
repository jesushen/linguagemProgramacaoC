#include<stdio.h>

void main(){
    int i, num = 0, linha = 1;

    for(i=0; i<=10; i++){
        if(i==2){
            printf("\n");
        }
        printf("%d x %d = %d \n", num, i, (num*i));
        num++;
    }
}
