#include<stdio.h>
#include<stdlib.h>

void main(){
    int vetor[3];
    int p;
    vetor[0]= 2;
    vetor[1]= 34;
    vetor[2]= 200;

    printf("Informe a posicao que deseja ver: \n");
    scanf("%d", &p);

    printf("O valor da posicao %d eh: %d", p, vetor[p]);

}
