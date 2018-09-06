#include<stdio.h>
#include<string.h>
void main(){
    char sexo;
    printf("\n Informe seu sexo: F -Feminino M - Masculino \n");
    scanf("%s", &sexo);
    if(sexo == 'F' || sexo== 'f'){
        printf("\n Voce eh do sexo feminino \n");
    }
    else{
        printf("\n Voce eh do sexo Masculino \n");
    }
    system("pause");
}

