#include<stdio.h>
#include<locale.h>

void main(){
    int n1, n2, op, total;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o primeiro n�mero: \n");
    scanf("%d", &n1);
    printf("Informe o primeiro n�mero: \n");
    scanf("%d", &n2);
    printf("O selecione uma op��o:\n 1-soma | 2-subtra��o | 3-multiplica��o | 4-divis�o |");
    scanf("%d", &op);
    switch(op){
    case 1:
        total = (n1+n2);
        printf("A soma dos n�meros: %d", total);
        break;
    case 2:
        total = (n1-n2);
        printf("A subtra��o dos n�meros: %d", total);
        break;
    case 3:
        total = (n1*n2);
        printf("A multiplica��o dos n�meros: %d", total);
        break;
    case 4:
        total = (n1/n2);
        printf("A divis�o dos n�meros: %d", total);
        break;
    default:
        printf("Op��o inv�lida \n");
        main();
    }
}

