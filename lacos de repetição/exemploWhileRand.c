#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h> // biblioteca para tipos booleanos

void main(){
    bool condicao = true;
    int num;
    srand(time(NULL));
    while(condicao){
        num = rand()%10;
        if(num == 3){
            printf("\nSorteou o %d \n", num);
            condicao = false;
        }
        printf("Número Sorteado: %d \n", num);

    }
}
