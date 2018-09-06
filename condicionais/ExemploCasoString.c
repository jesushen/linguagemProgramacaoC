#include <stdio.h>

void main(){
    char sexo;
    printf("Informe o Sexo: \n F ou f para Feminino\n M ou m para Masculino: \n");
    scanf("%c", &sexo);

    switch(sexo){
        case 'm':
            printf("Sexo Masculino");
            break;
        case 'M':
            printf("Sexo Masculino");
            break;
        case 'f':
            printf("Sexo Feminino");
            break;
        case 'F':
            printf("Sexo Feminino");
            break;
        default:
            printf("Voce nao digitou nenhum caracter valido, por favor informe um corrreto. \n");
            main();
            break;
    }
}
