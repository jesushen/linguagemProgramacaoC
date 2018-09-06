#include<stdio.h>
#include<string.h>
void main(){
    int idade;
    printf("Informe a sua idade: \n");
    scanf("%d", &idade);
    if(idade >=18){
        printf("Voce eh maior de idade com %d anos \n", idade);
    }
    printf("\n Fim da execucao da condicional \n");
    system("pause");
}


