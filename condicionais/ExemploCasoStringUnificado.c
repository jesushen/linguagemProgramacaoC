#include <stdio.h>

void main(){
    char sexo;
    printf("Informe o Sexo: \n F ou f para Feminino\n M ou m para Masculino: \n");
    scanf("%c", &sexo);
    /*
    Vejam que neste exemplo utilizamos o CASE agrupado para uma saida, ele testa o caracter
    e caso seja positivo ele apresenta a frase.
    */
    switch(sexo){
        case 'm':
        case 'M':
            printf("Sexo Masculino");
            break;
        case 'f':
        case 'F':
            printf("Sexo Feminino");
            break;
        default:
            printf("Voce nao digitou nenhum caracter valido, por favor informe um corrreto. \n");
            main();
            break;
    }
}
