#include<stdio.h>
void main(){
    int i, j;
    printf("\n de 0 a 98 com saltos duplos \n");
        for(i=0, j=0; i+j<100; i++, j++){
        printf(" %d |", (i+j));
    }
}
