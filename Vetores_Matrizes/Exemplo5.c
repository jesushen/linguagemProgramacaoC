#include<stdio.h>
#include<locale.h>
void main(){
    int num[3];
    setlocale(LC_ALL,"Portuguese");

    for(int i=0; i<3; i++){
        printf("Informe o %dº Número: ", (i+1));
        scanf("%d", &num[i]);
    }
    printf("\n Os valores digitados: \n");
    for(int i=0; i<3; i++){
        printf("O valor na posição [%d] é: %d\n", i, num[i]);
    }
}


