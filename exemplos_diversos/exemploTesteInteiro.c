#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
    int num;
    int aux;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe um número Inteiro: ");
    scanf("%d", &num);

   // printf("%d", typeof(num));
    /*if(aux == num){
        printf("O valor digitado é inteiro");
    }
    else{
         printf("O valor digitado não é um número inteiro");
    }*/
}
