#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
    int num;
    int aux;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe um n�mero Inteiro: ");
    scanf("%d", &num);

   // printf("%d", typeof(num));
    /*if(aux == num){
        printf("O valor digitado � inteiro");
    }
    else{
         printf("O valor digitado n�o � um n�mero inteiro");
    }*/
}
