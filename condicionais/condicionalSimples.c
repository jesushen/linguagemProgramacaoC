#include <stdio.h>

void main(){
    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero : %d : eh PAR", num);
    }
    else{
        printf("O numero : %d : eh IMPAR", num);
    }
}
