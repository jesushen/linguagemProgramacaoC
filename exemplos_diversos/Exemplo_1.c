#include<stdio.h>
#include<stdlib.h>

void main(){
    /*Declara��o de uma matriz UMA DIMENS�O, conhecida como vetor*/
    int num[5];
    int i, total=0;
    float media=0.0;

    for(i=0; i<5;i++){
        printf("Informe a %d � Nota:\n",(i+1));
        scanf("%d", &num[i]);
        total+=num[i];
    }
    media = total/i;
    printf("\nAs notas Lancadas foram: \n");
    for(i=0; i<5;i++){
        printf(" %d|", num[i]);
    }
    printf("\n\nA media das notas: %.2f", media);
}
