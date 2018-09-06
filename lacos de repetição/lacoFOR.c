#include <stdio.h>

void main(){
    int i;
    printf("\nExemplo de FOR\n");
    for(i=1; i<= 10; i++){
        printf("Passagem do FOR %d: \n", i);
    }
    i=1;
    printf("\nExemplo de While \n");
    while(i<=10){
        printf("Passagem no WHILE %d \n", i);
        i++;
    }
}
