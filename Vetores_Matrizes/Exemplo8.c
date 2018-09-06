#include<stdio.h>

void main(){
    int num[5];
    int i,j, tamanho, aux;
    tamanho = sizeof(num)/sizeof(num[0]);
    for(i=0; i<5; i++){
        printf("Digite um número: ");
        scanf("%d", &num[i]);
    }
    //tamanho-1 pega a ultima do vetor
    for(i=0;i<tamanho-1;i++){
        for(j=i+1; j<tamanho; j++){
            if(num[i]>num[j]){
                aux = num[j];
                num[j]=num[i];
                num[i] = aux;
            }
        }
    }
    printf("\n Números Ordenados \n");
    for(i=0; i<5; i++){
        printf("%d | ",num[i] );
    }

}
