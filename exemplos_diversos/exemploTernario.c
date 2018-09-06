#include<stdio.h>

void main(){
    int num;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &num);

    printf(num%2==0? "O numero %d, eh PAR": "O numero %d, eh IMPAR", num);


/*    if(num%2 == 0){
        printf("\n O numero %d, eh par",num);
    }
    else{
        printf("\n O numero %d, eh impar",num);
    }*/
}
