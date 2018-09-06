#include <stdio.h>

void main(){
    char sexo;

    printf("Informe o sexo: \n");
    scanf("%c", &sexo);
    //primeiro detalhe que podemos observar
    //quando utilizando char - string realizamos a validação com ASPAS SIMPLES
    //neste caso utilizamos o operador lógico "OR" "OU"
    if(sexo== 'F'|| sexo =='f'){
        printf("Sexo Feminino \n");
    }
    else{
        printf("Sexo Masculino \n ");
    }
}
