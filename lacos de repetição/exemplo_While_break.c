#include<stdio.h>
void main(){
    int fat, i, n;
    //while 1 � considerado um la�o infinito
    while(1){
        i=1;
        fat =1;
        printf("Informe o valor de N para calcular seu fatorial \n");
        scanf("%d", &n);
        if(n > 19){
            printf("N�o foi possivel calcular o Fatorial de %d \n");
            break;
        }
        while(i<=n){
            fat *= i;
            i++;
        }
        printf("Fatorial de N e: %d\n", fat);
    }
}
