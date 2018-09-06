#include<stdio.h>
#include<ctype.h>
void main(){
    char sexo;
    printf("Digite o sexo: \n  | F - Feminino  |  M - Masculino \n");
    scanf("%c",&sexo);
    sexo = toupper(sexo);
    if(sexo == 'F'){
        printf("Feminino \n");
    }
    else{
        printf("Masculino \n");
    }
}

