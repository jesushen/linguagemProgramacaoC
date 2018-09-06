#include<stdio.h>
#include<string.h>
void main(){
    int idade;
    printf("Informe a sua idade: \n");
    scanf("%d", &idade);
    if(idade >=18){
        printf("Voce eh maior de idade com %d anos \n", idade);
    }
    else{
        printf("\n voce eh menor de idade com % anos \n", idade);
    }
    system("pause");
}

