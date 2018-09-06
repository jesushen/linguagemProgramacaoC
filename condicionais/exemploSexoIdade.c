#include<stdio.h>
#include<locale.h>
void main(){
    char sexo;
    int idade;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o sexo F ou M: \n");
    scanf("%c", &sexo);
    printf("Informe a sua idade: \n");
    scanf("%d", &idade);


    if((sexo =='M') || (sexo == 'm')){
        if(idade>=18){
            printf("Sexo: Masculino \n Você é maior de idade, com %d anos \n", idade);
        }
        else{
            printf("Sexo: Feminino \n Você é menor de idade, com %d anos \n", idade);
        }
    }
    else{
        if(idade >=18){
            printf("Sexo: Feminino \n Você é maior de idade, com %d anos \n", idade);
        }
        else{
            printf("Sexo: Feminino \n Você é menor de idade, com %d anos \n", idade);
        }
    }
}
