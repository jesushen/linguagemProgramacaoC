#include<stdio.h>
void main(){
    //declara��o de uma matriz de duas dimens�es
    int numeros[6][2];
    int i, j;

    for(i=0; i<6;i++){
        printf("Linha [%d] -> ", i);
        for(j=1; j<=2;j++){
            printf("Coluna[%d] ",j);

        }
        printf("\n");
    }
}
