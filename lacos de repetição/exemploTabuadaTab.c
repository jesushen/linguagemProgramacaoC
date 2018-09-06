#include<stdio.h>

void main(){
    int i,j,k, num;

    num =1;

    //laço para as colunas
    for(i=0; i<=1; i++){
        printf("\n");
        for(k=1; k<=4; k++){
            printf("Tabuada do %d ", num);
            printf("\n");
            for(j=0; j<=10; j++){
                printf("%2d x %2d = %2d \n", num, j, (num*j));
            }
        }

    }
}
